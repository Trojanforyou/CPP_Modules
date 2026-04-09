#pragma once

#include <string>
#include <iostream>
#include <math.h>


class Fixed
{
	private:
		int				_value;
		static const int _bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed &operator=(const Fixed &other);
		Fixed operator+(const Fixed &other);
		Fixed operator*(const Fixed &other);
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator!=(const Fixed &other);
		Fixed operator++(int);
		Fixed operator-(const Fixed &other);
		Fixed operator/(const Fixed &other);
		Fixed operator++();
		static Fixed min(Fixed &a, Fixed &b);
		static Fixed min(const Fixed &a, const Fixed &b);
		static Fixed max(Fixed &a, Fixed &b);
		static Fixed max(const Fixed &a, const Fixed &b);
		void	setRawBits(int const raw);
		int		getRawBits()const;
		int		toInt()const;
		float	toFloat()const;
};
std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);