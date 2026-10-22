#include "AForm.hpp"
#include "Bureacraut.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentalPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern intern;
    Bureaucrat bureaucrat("Arda", 40);

    std::cout << "\n___ShrubberyCreationForm___\n";
    try
    {
        AForm *tmp = intern.makeForm("shrubbery creation", "bender");
        bureaucrat.signForm(*tmp);
        bureaucrat.executeForm(*tmp);
        delete tmp;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n___RobotomyRequestForm___\n";
    try
    {
        AForm *tmp = intern.makeForm("robotomy request", "Marvin");
        bureaucrat.signForm(*tmp);
        bureaucrat.executeForm(*tmp);
        delete tmp;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n___PresidentialPardonForm___\n";
    try
    {
        AForm *tmp = intern.makeForm("presidential pardon", "Ford");
        bureaucrat.signForm(*tmp);
        bureaucrat.executeForm(*tmp);
        delete tmp;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n___Unknown Form___\n";
    try
    {
        AForm *tmp = intern.makeForm("unknown form", "target");
        delete tmp;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}