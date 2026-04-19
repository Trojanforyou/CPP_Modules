#pragma once

#include <string>
#include <iostream>

struct Zombie
{
	private:
		std::string _Name;
    public:
        void	announce();
		void	SetName(std::string);
};
Zombie *zombieHorde(int n, std::string name);

