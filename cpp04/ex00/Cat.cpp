/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 12:56:11 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/11 15:56:16 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Constructor called for Cat" << std::endl;
}
Cat::~Cat()
{
	std::cout << "Destructor called for Cat" << std::endl;
}
Cat::Cat(std::string type): _type(type)
{
	std::cout << "Constructor called for Cat" << std::endl;
}
Cat::Cat(const Cat &other): Animal(other)
{
	std::cout << "Copy constructor for Cat called"  << std::endl;
	*this = other;
}
void	Cat::makeSound () const
{
	std::cout << _type << " Says Miau" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
		this->_type = other._type;
	return(*this);
}

std::string Cat::getType()const
{
	return(_type);
}
