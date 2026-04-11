#pragma once

#include "ClapTrap.hpp"

class FlagTrap: public ClapTrap
{
	public:
		FlagTrap();
		FlagTrap(std::string name);
		~FlagTrap();
		FlagTrap(const FlagTrap &other);
		FlagTrap &operator=(const FlagTrap &other);
		void	highFivesGuys();
};