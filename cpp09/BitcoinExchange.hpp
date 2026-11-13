#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include <algorithm>

#define	CSV_HEADER "date,exchange_rate"
#define TXT_HEADER "date | value"
#define CSV 1
#define TXT 2
class Bitcoin
{
	public:
		int _year;
		int _month;
		int _day;
		int _value;
		int _date;
		std::map<std::string, double> _container;
		bool parse(std::string path);
		bool validateDate(std::string date);
		bool validateValue(std::string val);
		bool leapYearValidate();
		int parseHeader(std::ifstream &file);
		int sufixCheck(std::string path);
		bool parseTxt(std::ifstream &file);
		bool parseCsv(std::ifstream &file);
		bool validateCalendar();
		bool validateDateTxt(std::ifstream &file);
		void BitcoinExcange();
};
