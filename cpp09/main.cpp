#include "BitcoinExchange.hpp"
#include <iomanip>

int main(int ac, char **av)
{
	Bitcoin data;
	if (ac != 2)
		return(0);
	data.parse(av[1]);
	std::cout << std::setprecision(10);
	for (const auto& pair : data._container) {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }
}