#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
	private:
		std::string _type;
	public:
		Dog();
		~Dog();
		Dog(std::string type);
		Dog &operator=(const Dog &other);
		Dog(const Dog &other);
		void	makeSound() const override;
		std::string getType()const;
};