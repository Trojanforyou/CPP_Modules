/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 14:17:23 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/11 15:53:54 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Constructor called for Dog" << std::endl;
}
Dog::~Dog()
{
	std::cout << "Destructor called for Dog" << std::endl;
}
Dog::Dog(std::string type): _type(type)
{
	std::cout << "Constructor called for Dog" << std::endl;
}
Dog::Dog(const Dog &other): Animal(other)
{
	std::cout << "Copy construcor called for Dog" << std::endl;
	*this = other;
}
Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
		this->_type = other._type;
	return(*this);
}

void	Dog::makeSound() const
{
	std::cout << _type << " Says woof" << std::endl;
}

std::string	Dog::getType() const
{
	return(_type);
}