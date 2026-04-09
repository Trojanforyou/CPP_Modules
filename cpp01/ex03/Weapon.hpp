#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

struct Weapon
{
	private:
		std::string	_type;
	public:
		void	setType(std::string type);
		std::string	getType();
    Weapon(std::string type): _type(type){}
};

#endif