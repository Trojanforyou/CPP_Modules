#pragma once
#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string _Name;
    public:
        void announce();
        void SetName(std::string Name);
        
};
void    randomChump(std::string name);
Zombie *newZombie(std::string name);