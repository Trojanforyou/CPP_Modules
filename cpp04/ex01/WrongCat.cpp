/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 16:14:25 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/12 13:52:30 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

Wrongcat::Wrongcat()
{
	std::cout << "Constructor for WrongCat called" << std::endl;
}
Wrongcat::~Wrongcat()
{
	std::cout << "Destructor for WrongCat called" << std::endl;
}
Wrongcat::Wrongcat(std::string type): WrongAnimal(type)
{
	std::cout << "Constructor called for WrongCat" << std::endl;
}
Wrongcat &Wrongcat::operator=(const Wrongcat &other)
{
	if (this != &other)
		this->_type = other._type;
	return(*this);
}

void	Wrongcat::makeSound()
{
	std::cout << "Idk how it does. Uaim?" << std::endl;
}
std::string Wrongcat::getType()
{
	return(_type);
}