#include "Bureacraut.hpp"
#include "Form.hpp"
int main()
{
	Bureaucrat bureaucrat1("bob", 100);
	try
	{
		Form form("Tax", 151, 50);
		bureaucrat1.signForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}