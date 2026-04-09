/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 15:54:44 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/09 13:30:35 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::attack(const std::string &target)
{
	if (_Energy == 0)
	{
		std::cout << "Too tired to hit" << std::endl; 
		return ;
	}
	if (_hitPoints == 0)
	{
		std::cout << "To weak to hit" << std::endl;
		return ;		
	}
	std::cout << _name << " Attacks " << target << " Causing " << _Damage << " points of damage " << std::endl;
	_Energy--;
		
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_Energy == 0)
	{
		std::cout << "Too tired to heal" << std::endl; 
		return ;
	}
	std::cout << "Claptrap " << _name << " regenerated " << amount << " HP" << std::endl;
	_hitPoints += amount;
	_Energy--;
	
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap is dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " Takes " << amount << " Points of damage" << std::endl;
	_hitPoints = _hitPoints - amount;
	if (_hitPoints < 0)
	{
		_hitPoints = 0;
	}
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is dead" << std::endl;
		return ;
	}
}
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor called" << std::endl;
	_name = name;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor Called" << std::endl;
}
ClapTrap::ClapTrap()
{
	std::cout << "Default Constructor Called" << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
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

ClapTrap::ClapTrap(const ClapTrap &other) 
{
	this->_name = other._name;
	this->_Damage = other._Damage;
	this->_Energy = other._Energy;
	this->_hitPoints = other._hitPoints;
}