/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 15:32:03 by msokolov          #+#    #+#             */
/*   Updated: 2026/04/10 17:36:10 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Constructor Called for ScavTrap" << std::endl;
	_Damage = 20;
	_Energy = 50;
	_hitPoints = 100;
	
}
ScavTrap::~ScavTrap()
{
	std::cout << "Destructor Called for ScavTrap "  << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
{
	std::cout << "Copy constructor called for ScavTrap" << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "Operator called for ScavTrap" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_Damage = other._Damage;
		this->_hitPoints = other._hitPoints;
		this->_Energy = other._Energy;
	}
	return(*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in gate keeper mode" << std::endl;
}
void	ScavTrap::attack(const std::string &target)
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
	std::cout << "ScavTrap " << _name << " Attacks " << target << " Causing " << _Damage << " points of damage " << std::endl;
	_Energy--;
}
ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "Default constructor for ScavTrap is called" << std::endl;
}