/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 14:17:23 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/12 14:55:26 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Constructor called for Dog" << std::endl;
	_ideas = new Brain();
}
Dog::~Dog()
{
	std::cout << "Destructor called for Dog" << std::endl;
	delete _ideas;
}
Dog::Dog(std::string type): Animal(type)
{
	std::cout << "Constructor called for Dog" << std::endl;
	_ideas = new Brain();
}
Dog::Dog(const Dog &other): Animal(other)
{
	std::cout << "Copy construcor called for Dog" << std::endl;
	_ideas = new Brain();
	*this = other;
}
Dog &Dog::operator=(const Dog &other)
{
	if (this != &other && _ideas != 0 && other._ideas != 0)
	{
		this->_type = other._type;
		*(this->_ideas) = *(other._ideas);
	}
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

Brain	*Dog::getBrain() const
{
	return(_ideas);
}