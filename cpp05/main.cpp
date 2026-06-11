#include "Bureacraut.hpp"

int main()
{
	Bureaucrat bureaucrat1("bob", 149);
	std::cout << bureaucrat1;
	try
	{
		bureaucrat1.decreaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << bureaucrat1;
	std::cout << "________First Bureaucrat_________" << '\n';
	
	Bureaucrat bureaucrat2("Mark", 2);
	std::cout << bureaucrat2;
	try
	{
		bureaucrat2.increaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << bureaucrat2;
	std::cout << "________Second Bureaucrat_________" << '\n';
}