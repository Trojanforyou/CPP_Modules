#pragma once

#include "Animal.hpp"
#include "brain.hpp"

class Dog: public Animal
{
	public:
		Brain *_ideas;
		Dog();
		~Dog();
		Dog(std::string type);
		Dog &operator=(const Dog &other);
		Dog(const Dog &other);
		void	makeSound() const override;
		std::string getType()const;
		Brain	*getBrain() const;
};