/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 18:05:28 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/11 11:14:32 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap()
{
	std::cout << "Default constructor called for FlagTrap" << std::endl;
}
FlagTrap::FlagTrap(std::string name): ClapTrap(name)
{
	std::cout << "Constructor called for FlapTrap" << std::endl;
	_Damage = 30;
	_Energy = 100;
	_hitPoints = 100;
}
FlagTrap::FlagTrap(const FlagTrap &other): ClapTrap(other)
{
	std::cout << "Copy Constructor called for FlagTrap" << std::endl;	
}
FlagTrap &FlagTrap::operator=(const FlagTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_Damage = other._Damage;
		this->_Energy = other._Energy;
		this->_hitPoints = other._hitPoints;
	}
	return(*this);
}

FlagTrap::~FlagTrap()
{
	std::cout << "Destructor called for FlagTrap" << std::endl;
}
void	FlagTrap::highFivesGuys()
{
	if (_hitPoints == 0)
		return ; 
	std::cout << "Highfive?" << std::endl;
}