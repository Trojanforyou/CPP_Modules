#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator=(const WrongAnimal &other);
		WrongAnimal(std::string type);
		std::string getType()const;
		void	makeSound() const;

};