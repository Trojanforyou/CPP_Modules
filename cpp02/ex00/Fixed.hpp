#pragma once

#include <string>
#include <iostream>

class	Fixed
{
	private:
		int	_value;
		static const int _bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
};
