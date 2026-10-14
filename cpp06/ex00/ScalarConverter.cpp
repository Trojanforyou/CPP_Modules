#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string input)
{
	ScalarConverter::parseType(input);
}

ScalarConverter::Type  ScalarConverter::detectType(std::string input)
{
	ScalarConverter::pseudoValue(input);
	int 	pos = 0;

	for (int i = pos; input[i] == ' '; i++)
		pos++;
	if (input[pos] == '-' || input[pos] == '+')
		pos++;
	std::string::size_type idx = input.find('.');
	if (idx != std::string::npos)
	{
		if (input.find('.', idx + 1) == std::string::npos)
		{
			if (idx > 0 && std::isdigit(input[idx + 1]) && std::isdigit(input[idx - 1]))
			{
				std::string posF = input.substr(pos, input.size() - pos - 1);
				if (posF.find_first_not_of("0123456789.", 0) == std::string::npos)
				{
					if (input.back() == 'f' || input.back() == 'F')
						return (FLOAT);
					else
						return(DOUBLE);
				}
			}
		}
	} 
	else if (std::isdigit(input[pos]))
	{
		if (input.find_first_not_of("0123456789", pos) == std::string::npos)
			return (INT);
	}
	else if (input.size() == 1)
	{
		if (!std::isdigit(input[pos]))
			return(CHAR);
	}
	return(INVALID);
}
ScalarConverter::Type ScalarConverter::parseType(std::string input)
{
	Type type = ScalarConverter::detectType(input);
	switch (type)
	{
		case (FLOAT):
		{
			float value = std::stof(input);
			ScalarConverter::printFloat(value);
			ScalarConverter::printInt(value);
			ScalarConverter::printDouble(value);
			ScalarConverter::printChar(value);
			break ;
		}
		case (INT):
		{
			long long value = std::stoll(input);
			ScalarConverter::printFloat(value);
			ScalarConverter::printInt(value);
			ScalarConverter::printDouble(value);
			ScalarConverter::printChar(value);
			break ;
		}
		case (DOUBLE):
		{
			double value = std::stod(input);
			ScalarConverter::printFloat(value);
			ScalarConverter::printInt(value);
			ScalarConverter::printDouble(value);
			ScalarConverter::printChar(value);
			break ;
		}
		case (CHAR):
		{
			char value = input[0];
			ScalarConverter::printFloat(value);
			ScalarConverter::printInt(value);
			ScalarConverter::printDouble(value);
			ScalarConverter::printChar(value);
			break ;
		}
		case (INVALID):
			std::cout << "Invalid Input" << '\n';
			break ;
	}
	return type;
}
void ScalarConverter::printInt(double input)
{
	if (input > std::numeric_limits<int>::max())
	{
		std::cout << "int: " << "impossible" << '\n';
		return ;
	}
	else if (input < std::numeric_limits<int>::min())
	{
		std::cout << "int: " << "impossible" << '\n';
		return ;
	}
	else
		std::cout << "int: " << static_cast<int>(input) << '\n';
}
void ScalarConverter::printFloat(double input)
{
	std::ostringstream stream;

	if (input > std::numeric_limits<float>::max())
	{
		std::cout << "float: " << "impossible" << '\n';
		return ;
	}
	else if (input < std::numeric_limits<float>::lowest())
	{
		std::cout << "float: " << "impossible" << '\n';
		return ;
	}
	stream << input;
	std::string res = stream.str();
	if (res.find('.') == std::string::npos&& res.find('e') == std::string::npos && res.find('E') == std::string::npos)
    	res += ".0";
	if (input == std::floor(input))
		std::cout << "float: " << res << "f" << '\n';
	else
		std::cout << "float: " << std::setprecision(std::numeric_limits<float>::max_digits10)
		<< res << "f" << '\n';
}
void ScalarConverter::printDouble(double input)
{
	std::ostringstream stream;
	
	if (input > std::numeric_limits<double>::max())
	{
		std::cout << "double: " << "impossible";
		return ;
	}
	else if (input < std::numeric_limits<double>::lowest())
	{
		std::cout << "double: " << "impossible" << '\n';
		return ;
	}
	stream << input;
	std::string res = stream.str();
	if (res.find('.') == std::string::npos&& res.find('e') == std::string::npos && res.find('E') == std::string::npos)
    	res += ".0";
	if (input == std::floor(input))
		std::cout << "double: " << res << '\n';
	else
		std::cout << "double: " << res << '\n';
}
void ScalarConverter::printChar(double input)
{
	if (input > std::numeric_limits<char>::max())
	{
		std::cout << "char: " << "impossible" << '\n';
		return ;
	}
	else if (input < std::numeric_limits<char>::min())
	{
		std::cout << "char: " << "impossible" << '\n';
		return ;
	}
	if (std::isprint(static_cast<unsigned char>(input)))
		std::cout << "char: " << static_cast<unsigned char>(input) << '\n';
	else
		std::cout << "char: " << "Non displayable" << '\n';
}
void ScalarConverter::pseudoValue(std::string input)
{
	if (input == "nan" || input == "nanf")
	{
		std::cout << "char: impossible" << '\n';
		std::cout << "int: impossible" << '\n';
		std::cout << "float: nanf" << '\n';
		std::cout << "double: nan" << '\n';
		return;
	}
	if (input == "+inf" || input == "+inff")
	{
		std::cout << "char: impossible" << '\n';
		std::cout << "int: impossible" << '\n';
		std::cout << "float: +inff" << '\n';
		std::cout << "double: +inf" << '\n';
		return;
	}
	if (input == "-inf" || input == "-inff")
	{
		std::cout << "char: impossible" << '\n';
		std::cout << "int: impossible" << '\n';
		std::cout << "float: -inff" << '\n';
		std::cout << "double: -inf" << '\n';
		return;
	}
}



		










