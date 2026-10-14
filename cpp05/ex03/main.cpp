#include "AForm.hpp"
#include "Bureacraut.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentalPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << "___ShrubberyCreationForm___" << '\n';
	Bureaucrat bureaucrat1("Arda", 40);
	ShrubberyCreationForm form1("home");
	Intern intern;
	bureaucrat1.signForm(form1);
	try
	{
		form1.execute(bureaucrat1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	AForm *tmp = intern.makeForm("shrubbery creation", "bender");
	delete (tmp);
}