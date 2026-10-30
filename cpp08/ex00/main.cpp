#include "easyfind.hpp"

int main()
{
	std::vector<int> num = {10, 20, 30, 40};
	try
	{
		std::vector<int>::iterator it = easyfind(num, 35);
		std::cout << *it << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}