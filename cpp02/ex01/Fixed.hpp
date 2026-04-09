#pragma once

#include <math.h>
#include <string>
#include <iostream>

class Fixed
{
	private:
		int		_value;
		static const int _bits = 8;
	public:
		Fixed(const int integer);
		Fixed();
		Fixed(const Fixed &other);
		Fixed(const float floating);
		Fixed &operator=(const Fixed &other);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
		int		toInt()const;
		float	toFloat()const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);