#include "Bureacraut.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "________First Bureaucrat_________" << '\n';
	try
	{
		Bureaucrat bureaucrat1("Erdogan", 100);
		Form form("Tax", 150, 50);
		bureaucrat1.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "________Second Bureaucrat_________" << '\n';
	try
	{
		Bureaucrat bureaucrat2("jack", 100);
		Form form("Tax", 10, 150);
		bureaucrat2.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}