#include "Identify.hpp"

Base * generate(void)
{
	int res = rand() % 3;

	switch (res)
	{
	case (0):
		return (new A);
	case (1):
		return (new B);
	case (2):
		return (new C);
	}
	return (NULL);
} 

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "Pointer type is A" << '\n';
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "Pointer type is B" << '\n';
	else if(dynamic_cast<C*>(p) != nullptr)
		std::cout << "Pointer type is C" << '\n';
	else
		std::cout << "Invalid Type";
}

void identify(Base& p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "Adress Type is A" << '\n';
		return ;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		dynamic_cast<B&>(p);
		std::cout << "Adress Type is B" << '\n';
		return ;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		dynamic_cast<C&>(p);
		std::cout << "Adress Type is C" << '\n';
		return ;
	}
	catch(const std::exception& e)
	{
	}
}