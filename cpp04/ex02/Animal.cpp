/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 12:42:10 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/12 13:22:27 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default constructor for Animal called" << std::endl;
}
Animal::~Animal()
{
	std::cout << "Destructor for Animal called" << std::endl;
}
Animal::Animal(std::string type): _type(type)
{
	std::cout << "Constructor for Animal called" << std::endl;
}
Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
		this->_type = other._type;
	return(*this);
}

Animal::Animal(const Animal &other)
{
	this->_type = other._type;
}
std::string	Animal::getType()const
{
	return(_type);
}