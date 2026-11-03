#include "Span.hpp"

int main()
{
	Span sp(10000);

    std::srand(std::time(0));

    for (int i = 0; i < 10000; i++)
        sp.addNumber(std::rand());

    std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest: " << sp.longestSpan() << std::endl;
}