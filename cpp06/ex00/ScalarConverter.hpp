#pragma once

#include <string>
#include <iostream>
#include <string.h>
#include <cctype>
#include <limits>
#include <iomanip>
#include <cmath>

class ScalarConverter
{
	private:
		enum Type
		{
			CHAR,
			INT,
			FLOAT,
			DOUBLE,
			INVALID
		};
		static Type detectType(std::string input);
		static Type parseType(std::string input);
		static void printInt(double input);
		static void printFloat(double input);
		static void printDouble(double input);
		static void printChar(double input);
		static void pseudoValue(std::string input);
		ScalarConverter() = delete;
		~ScalarConverter() = delete;
		ScalarConverter(const ScalarConverter& other) = delete;
		ScalarConverter& operator=(const ScalarConverter& other) = delete;
	public:
		static void convert(std::string num);
};

