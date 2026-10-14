#pragma once

#include <string>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm(std::string target): AForm(target, 145, 137), _target(target){}
		~ShrubberyCreationForm() = default;
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		
		void execute(Bureaucrat const &executor) const;
};

