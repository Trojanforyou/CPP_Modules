/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 12:56:11 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/12 14:53:23 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Constructor called for Cat" << std::endl;
	_ideas = new Brain();
}
Cat::~Cat()
{
	std::cout << "Destructor called for Cat" << std::endl;
	delete _ideas;
}
Cat::Cat(std::string type): Animal(type)
{
	std::cout << "Constructor called for Cat" << std::endl;
	_ideas = new Brain();
}
Cat::Cat(const Cat &other): Animal(other)
{
	std::cout << "Copy constructor for Cat called"  << std::endl;
	*this = other;
	_ideas = new Brain();
}
void	Cat::makeSound () const
{
	std::cout << _type << " Says Miau" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other && _ideas != 0 && other._ideas != 0)
	{
		this->_type = other._type;
		*(this->_ideas) = *(other._ideas);
	}
	return(*this);
}

std::string Cat::getType()const
{
	return(_type);
}

Brain	*Cat::getBrain() const
{
	return(_ideas);
}
