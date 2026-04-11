#pragma once

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap();
		~ScavTrap();
		ScavTrap &operator=(const ScavTrap &other);
		ScavTrap(const ScavTrap &other);
		void	attack(const std::string &target);
		void	guardGate();
};