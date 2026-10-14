#include "Intern.hpp"

AForm *Intern::makeForm(std::string name, std::string target)
{
	AForm *form = NULL;
	std::string pool[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"};
	for (int i = 0; i != 3; i++)
	{
		if (pool[i] == name)
		{
			switch (i)
			{
			case 0:
				form = new ShrubberyCreationForm(target);
				break;
			case 1:
				form = new RobotomyRequestForm(target);
				break;
			case 2:
				form = new PresidentalPardonForm(target);
				break;
			}
		}
	}
	if (form == NULL)
	{
		std::cout << "Intern failed to create a form (Fire him)" << '\n';
		return(NULL);
	}
	std::cout << "Intern creates " << name;
	return (form);
}