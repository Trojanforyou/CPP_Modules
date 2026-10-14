#pragma once

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentalPardonForm.hpp"
#include <string>


class Intern
{
	public:
		Intern() = default;
		~Intern() = default;
		AForm	*makeForm(std::string name, std::string target);
};