#pragma once

#include "WrongAnimal.hpp"

class Wrongcat: public WrongAnimal
{
	private:
		std::string _type;
	public:
		Wrongcat();
		~Wrongcat();
		Wrongcat(const Wrongcat &other);
		Wrongcat(std::string type);
		Wrongcat &operator=(const Wrongcat &other);
		std::string getType();
		void	makeSound();
};

