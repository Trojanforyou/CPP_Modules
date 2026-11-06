#include "BitcoinExchange.hpp"

void Bitcoin::parse(std::string path)
{
	// 0-31 day 0-12 month '-' day = 3 month = 2 year = 1 if = ',' == value
	std::ifstream file(path);
	double afterComa;
	std::string beforeComa;
	if (!file.is_open())
	{
		std::cerr << "file is not valid" << '\n';
		return ;
	}
	std::string storage;
	while (std::getline(file, storage, ','))
	{
		std::cout << beforeComa;
		beforeComa = storage;
		if (!validateDate(beforeComa))
			return ;
		if (std::getline(file, storage, '\n'))
		{
			try
			{
				afterComa = stod(storage);
			}
			catch(const std::exception& e)
			{
				std::cerr << "data contains non valid value" << '\n';
			}
			
		}
		_container.emplace(beforeComa, afterComa);
	}
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
	
	if (_year < 0 || _year > 2026)
		return (false);
	if (_month < 0 || _month > 12)
		return (false);
	if (_day < 0 || _day > 31)
		return (false);
	std::cout << _year << '\n';
	std::cout << _month << '\n';
	std::cout << _day << '\n';

	return (true);
}
bool Bitcoin::validateValue(double val)
{
	std::
}