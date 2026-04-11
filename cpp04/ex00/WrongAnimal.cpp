/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 16:01:59 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/11 17:45:47 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Constructor for WrongAnimal called"  << std::endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor for WrongAnimal called"  << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "Copy constructor for WrongAnimal called" << std::endl;
	*this = other;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		this->_type = other._type;
	return(*this);
}

WrongAnimal::WrongAnimal(std::string type): _type(type)
{
	std::cout << "Constructor for WrongAnimal called" << std::endl;
}
void	WrongAnimal::makeSound() const
{
	std::cout << "This sound comes from wrong Animal" << std::endl;
}
 
std::string WrongAnimal::getType() const
{
	return(_type);
}