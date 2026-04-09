/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 11:51:12 by msokolov          #+#    #+#             */
/*   Updated: 2026/03/29 13:37:21 by msokolov         ###   ########.fr       */
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
	if (this == &other)
		return(*this);
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
int	Fixed::getRawBits() const
{
	std::cout << "getRawBits Member Function Called" << std::endl;
	return(_value);	
}