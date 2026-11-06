#include "BitcoinExchange.hpp"

bool Bitcoin::parse(std::string path)
{
	std::string valCheck;
	std::ifstream file(path);
	std::string beforeComa;
	double afterComa;

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
	if (!parseHeader(file))
		return (false);
	std::string storage;
	while (std::getline(file, storage, ','))
	{
		if (storage == "")
		beforeComa = storage;
		if (!validateDate(beforeComa))
			return (false);
		if (std::getline(file, storage, '\n'))
		{
			valCheck = storage;
			// if (!validateValue(valCheck))
			// 	return false;
			afterComa = std::stod(valCheck);	
		}
		_container.emplace(beforeComa, afterComa);
	}
	return (true);
}
bool Bitcoin::validateDate(std::string date)
{
	for (char c : date)
	{
		if (c == '-')
			continue;

		if (!std::isdigit(c))
			return false;
	}
	std::string::size_type firstEnt = date.find('-');
	std::string::size_type secondEnt = date.find('-', firstEnt + 1);
	std::string::size_type errorEnt = date.find('-', secondEnt + 1);
	if (errorEnt != std::string::npos)
		return (false);
	try
	{
		_year = std::stoi(date.substr(0, firstEnt + 1));
		_month = std::stoi(date.substr(firstEnt + 1, secondEnt - 1));
		_day = std::stoi(date.substr(secondEnt + 1));
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (_month == 02 && _day == 29)
	{
		if (!leapYearValidate())
			return (false);
	}
	if (_year < 0)
		return (false);
	if (_month < 0 || _month > 12)
		return (false);
	if (_day < 0 || _day > 31)
		return (false);
	return (true);
}
// bool Bitcoin::validateValue(std::string val)
// {
// 	int dot = val.find('.');
// }
bool Bitcoin::leapYearValidate()
{
	if (_year % 400 == 0 || (_year % 4 == 0 && _year % 100 != 0 ))
		return (true);
	else
	{
		std::cout << "not a leap year" << '\n';
		return (false);
	}
	return (true);
}
bool Bitcoin::parseHeader(std::ifstream &file)
{
	std::string storage;
	while (std::getline(file, storage))
	{
		if (storage == "\0" && storage == " ")
			continue;
		if (storage.find_first_not_of(" \t\r"))
		{
			if (storage != HEADER)
			{
				std::cout << "invalid header" << '\n';
				return (false);
			}
			else
			{
				std::cout << "here";
				return (true);
			}
		}
	}
	return (true);
}