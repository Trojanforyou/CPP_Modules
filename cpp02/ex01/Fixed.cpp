/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 13:49:43 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/05 17:24:59 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy Constructor Called" << std::endl;
	_value = other.getRawBits();
	
}
Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy Assigment Operator Called" << std::endl;
	if (this != &other)
		_value = other.getRawBits();
	return(*this);
		
}
Fixed::Fixed()
{
	std::cout << "Default Constructor Called" << std::endl;
	_value = 0;
}
Fixed::~Fixed()
{
	std::cout << "Deconstructor Called" << std::endl;
}
void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits Member Funclion Called" << std::endl;
	_value = raw;
}
Fixed::Fixed(const int integer)
{
	_value = integer << _bits;
}
Fixed::Fixed(const float floating)
{
	_value = roundf(floating * (1 << _bits));
}
int	Fixed::getRawBits() const
{
	std::cout << "getRawBits Member Function Called" << std::endl;
	return(_value);	
}

int	Fixed::toInt()const
{
	return(this->_value >> this->_bits);
}

float	Fixed::toFloat()const
{
	return((float)this->_value / (1 << this->_bits));
}
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return(out);
}