#pragma once

#include "Animal.hpp"
#include "brain.hpp"

class Cat: public Animal
{
	private:
		Brain *_ideas;
	public:
		Cat();
		~Cat();
		Cat(const Cat &other);
		Cat(std::string type);
		Cat &operator=(const Cat &other);
		void	makeSound() const override;
		std::string getType()const;
		Brain *getBrain() const;
};