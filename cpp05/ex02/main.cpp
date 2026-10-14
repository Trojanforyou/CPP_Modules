#include "AForm.hpp"
#include "Bureacraut.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentalPardonForm.hpp"

int main()
{
	std::cout << "___ShrubberyCreationForm___" << '\n';
	Bureaucrat bureaucrat1("Arda", 40);
	ShrubberyCreationForm form1("home");
	bureaucrat1.signForm(form1);
	try
	{
		form1.execute(bureaucrat1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << '\n' << "___RobotomyRequestForm___" << '\n';
	Bureaucrat bureaucrat2("Elsa", 41);
	RobotomyRequestForm form2("Petition");
	bureaucrat2.signForm(form2);
	try
	{
		form2.execute(bureaucrat2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << '\n' << "___PresidentalPardonForm___" << '\n';
	Bureaucrat bureaucrat3("Obama", 5);
	PresidentalPardonForm form3 ("Jesus");
	bureaucrat3.signForm(form3);
	try
	{
		form3.execute(bureaucrat3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}