#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include <algorithm>

class Bitcoin
{
	public:
		int _year;
		int _month;
		int _day;
		std::map<std::string, double> _container;
		void parse(std::string path);
		bool validateDate(std::string date);
		bool validateValue(double val);
		bool leapYearValidate();
		
};
