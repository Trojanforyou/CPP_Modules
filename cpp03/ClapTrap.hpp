#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
	private:
	std::string _name;
		int	_hitPoints = 10;
		int _Energy = 10;
		int	_Damage = 0;
	public:
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		ClapTrap operator=(const ClapTrap &other);
		~ClapTrap();
		ClapTrap();
};