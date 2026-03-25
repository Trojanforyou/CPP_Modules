#pragma onces

#include <string>
#include <iostream>

class	Fixed
{
	private:
		int	_value;
		static const int integer = 8;
	public:
		Fixed(int value): _value(value){}
		Fixed(const Fixed &other);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
};
