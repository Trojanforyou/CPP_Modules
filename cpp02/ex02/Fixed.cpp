/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 15:28:55 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/08 14:44:00 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}
int	Fixed::getRawBits()const
{
	return(_value);
}
Fixed::Fixed()
{
	_value = 0;
}
Fixed::~Fixed()
{
	
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		_value = other.getRawBits();
	return(*this);
}
int	Fixed::toInt()const
{
	return(this->_value >> this->_bits);
}

float	Fixed::toFloat()const
{
	return((float)this->_value / (1 << this->_bits));
}
std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return(out);
}

Fixed::Fixed(const int value)
{
	_value = value << _bits;
}
Fixed::Fixed(const float value)
{
	_value = roundf(value * (1 << _bits));
}
Fixed Fixed::operator+(const Fixed &other)
{
	Fixed	result;

	int	tmp = this->_value + other.getRawBits();
	result.setRawBits(tmp);
	return(result);
}

Fixed Fixed::operator*(const Fixed &other)
{
	float val1 = this->toFloat();
	float val2 = other.toFloat();
	float tmp = val1 * val2;
	Fixed res(tmp);
	return(res);
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->_value > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const
{
	return(this->_value < other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const
{
	return(this->_value == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const
{
	return(this->_value != other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
	return(this->_value >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const
{
	return(this->_value <= other.getRawBits());
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	_value++;
	return(tmp);
}

Fixed	Fixed::operator++()
{
	++_value;
	return(*this);
}

Fixed Fixed::operator-(const Fixed &other)
{
	Fixed res;

	int	tmp = this->_value - other.getRawBits();
	res.setRawBits(tmp);
	return(res);
}

bool Fixed::operator!=(const Fixed &other)
{
	return(this->_value != other.getRawBits());
}

Fixed Fixed::operator/(const Fixed &other)
{
	float val1 = this->toFloat();
	float val2 = other.toFloat();
	float tmp = val1 / val2;
	Fixed res(tmp);
	return (res);
}

Fixed Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return(a);
	return(b);
}
Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return(a);
	return(b);
}
Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return(a);
	return(b);
}
Fixed Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return(a);
	return(b);
}