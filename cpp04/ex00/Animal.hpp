#pragma once

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		virtual ~Animal();
		Animal &operator=(const Animal &other);
		Animal(const Animal &other);
		Animal(std::string type);
		virtual void	makeSound() const;
		std::string	getType()const;
};