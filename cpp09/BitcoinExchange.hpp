#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include <algorithm>

#define HEADER "date,exchange_rate"
class Bitcoin
{
	public:
		int _year;
		int _month;
		int _day;
		std::map<std::string, double> _container;
		bool parse(std::string path);
		bool validateDate(std::string date);
		// bool validateValue(std::string val);
		bool leapYearValidate();
		bool parseHeader(std::ifstream &file);
		
};
