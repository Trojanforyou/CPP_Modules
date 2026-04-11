#pragma once

#include "Animal.hpp"

class Cat: public Animal
{
	private:
		std::string _type;
	public:
		Cat();
		~Cat();
		Cat(const Cat &other);
		Cat(std::string type);
		Cat &operator=(const Cat &other);
		void	makeSound() const override;
		std::string getType()const;
};