#include "Bureacraut.hpp"

int main()
{
	std::cout << "________First Bureaucrat_________" << '\n';
	try
	{
		Bureaucrat bureaucrat1("bob", 149);
		std::cout << bureaucrat1;
		bureaucrat1.decreaseGrade();
		std::cout << bureaucrat1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "________Second Bureaucrat_________" << '\n';
	try
	{
		Bureaucrat bureaucrat2("Mark", 2);
		std::cout << bureaucrat2;
		bureaucrat2.increaseGrade();
		std::cout << bureaucrat2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}