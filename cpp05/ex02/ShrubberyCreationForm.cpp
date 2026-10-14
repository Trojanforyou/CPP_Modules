#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (GetSigned() == false)
		throw (FormNotSignedException());
	if (executor.getGrade() > GetEgrage())
		throw (GradeTooLowException());

	std::ofstream file(_target + "_shrubbery");
	if (!file)
		std::cerr << "Error: Could not open the file" << '\n';

	file << "   *\n"
        "  ***\n"
        " *****\n"
        "*******\n"
        "   |\n"
        "   |\n\n";

	file << "   *\n"
        "  ***\n"
        " *****\n"
        "*******\n"
        "   |\n"
        "   |\n";
	
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		this->_target = other._target;
	}
	return(*this);
} 

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other)
{
	this->_target = other._target;
}
