#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		unsigned int _N;
		std::vector<int> _num;

	public:
		Span(unsigned int N): _N(N) {};
		void			addNumber(int add);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
};