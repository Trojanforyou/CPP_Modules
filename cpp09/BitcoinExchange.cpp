#include "BitcoinExchange.hpp"

bool Bitcoin::parse(std::string path)
{
	std::ifstream file(path);
	std::string fileType;

	int type = parseHeader(file);
	int extention = sufixCheck(path);
	// std::cout << path;
	// std::cout << type;
	// std::cout << extention;
	if (!file.is_open())
	{
		std::cerr << "file is not valid" << '\n';
		return (false);
	}
	if (file.peek() == std::ifstream::traits_type::eof())
	{
		std::cout << "file is empty" << '\n';
		return (false);
	}
	
	if (type == CSV && extention == CSV)
		fileType = "csv";
	else if (type == TXT && extention == TXT)
		fileType = "txt";
	else
		return (false);
	if (fileType == "csv")
		parseCsv(file);
	else if (fileType == "txt")
		parseTxt(file);
	return (true);
}
bool Bitcoin::validateDate(std::string date)
{
	for (char c : date)
	{
		if (c == '-')
			continue;

		if (!std::isdigit(c))
		{
			std::cerr << "date contains non valid value" << '\n';
			return (false);
		}
	}
	std::string::size_type firstEnt = date.find('-');
	std::string::size_type secondEnt = date.find('-', firstEnt + 1);
	std::string::size_type errorEnt = date.find('-', secondEnt + 1);
	if (!firstEnt || !secondEnt || errorEnt != std::string::npos)
	{
		std::cerr << "date is not valid" << '\n';
		return (false);
	}
	try
	{
		_year = std::stoi(date.substr(0, firstEnt + 1));
		_month = std::stoi(date.substr(firstEnt + 1, secondEnt - 1));
		_day = std::stoi(date.substr(secondEnt + 1));
	}
	catch(const std::exception& e)
	{
		std::cerr << "date is not valid" << '\n';
		return (false);
	}
	if (!validateCalendar())
		return (false);
	return (true);
}
bool Bitcoin::validateValue(std::string val)
{
	for (char c : val)
	{
		if (c == '.')
			continue;
		if (!std::isdigit(c))
		{
			std::cerr << "date contains non valid value" << '\n';
			return (false);
		}
	}
	std::string::size_type delim = val.find('.');
	std::string::size_type delimErr = val.find('.', delim + 1);
	if (delimErr != std::string::npos)
		return (false);
	
	return (true);
}
bool Bitcoin::leapYearValidate()
{
	if (_day  > 29)
	{
		std::cerr << "date is not valid" << '\n';
		return (false);
	}
	if (_year % 400 == 0 || (_year % 4 == 0 && _year % 100 != 0 ))
		return (true);
	else
	{
		std::cerr << "not a leap year" << '\n';
		return (false);
	}
	return (true);
}
int Bitcoin::parseHeader(std::ifstream &file)
{
	std::string storage;
	while (std::getline(file, storage))
	{
		if (storage.find_first_not_of(" \t\r") != std::string::npos)
		{
			if (storage == CSV_HEADER)
				return (CSV);
			else if (storage == TXT_HEADER)
				return (TXT);
			else
			{
				std::cout << "invalid header" << '\n';
				return (0);
			}
		}
	}
	return (false);
}

bool Bitcoin::validateCalendar()
{
	if (_month == 02 && _day > 28)
	{
		if (!leapYearValidate())
			return (false);
	}
	if (_year < 0)
	{
		std::cerr << "year is not valid" << '\n';
		return (false);
	}
	if (_month < 1 || _month > 12)
	{
		std::cerr << "month is not valid" << '\n';
		return (false);
	}
	if (_day > 30 && (_month == 4 || _month == 6 || _month == 9 || _month == 11 ))
	{
		std::cerr << "month is not valid" << '\n';
		return (false);
	}
	if (_day < 1 || _day > 31)
	{
		std::cerr << "day is not valid" << '\n';
		return (false);
	}
	return (true);
}
bool Bitcoin::validateDateTxt(std::ifstream &file)
{
	std::string storage;

	while (std::getline(file, storage, '|'))
	{
		if (!validateDate(storage))
			return (false);
		if (!validateCalendar())
		try
		{
			_date = stoi(storage);
		}
		catch(const std::exception& e)
		{
			std::cerr << "date is not valid" << '\n';
			return (false);
		}
		if (std::getline(file, storage, '\n'))
		{
			if (!validateValue(storage))
				return (false);
			try
			{
				_value = stoi(storage);
			}
			catch(const std::exception& e)
			{
				std::cerr << "value is not valid" << '\n';
				return (false);
			}
			std::cout << storage;
		}
	}
	return (0);
}
int Bitcoin::sufixCheck(std::string path)
{
	size_t pos = path.find_last_of('.');

	if (pos == std::string::npos)
	{
		std::cout << "invalid sufix" << '\n';
		return (0);
	}
	std::string extension = path.substr(pos);
	
	if (extension == ".csv")
		return (CSV);
	else if (extension == ".txt")
		return (TXT);
	else
		return (0);
}
bool Bitcoin::parseCsv(std::ifstream &file)
{
	std::string storage;
	std::string beforeDelim;
	std::string valCheck;
	double 		afterDelim;

 	std::getline(file, storage);
	while (std::getline(file, storage, ','))
	{
		if (storage == CSV_HEADER)
			continue;
		beforeDelim = storage;
		if (!validateDate(beforeDelim))
			return (false);
		if (std::getline(file, storage, '\n'))
		{
			valCheck = storage;
			if (!validateValue(valCheck))
				return false;
			afterDelim = std::stod(valCheck);	
		}
		_container.emplace(beforeDelim, afterDelim);
	}
	return (true);
}
bool Bitcoin::parseTxt(std::ifstream &file)
{
	std::string storage;
	std::string beforeDelim;
	std::string valCheck;
	double afterDelim;

	while (std::getline(file, storage, '|'))
	{
		if (storage == TXT_HEADER)
			continue;
		beforeDelim = storage;
		if (!validateDate(beforeDelim))
			return (false);
		if (std::getline(file, storage, '\n'))
		{
			valCheck = storage;
			if (!validateValue(valCheck))
				return false;
			afterDelim = std::stod(valCheck);	
		}
	}
	return (true);
}