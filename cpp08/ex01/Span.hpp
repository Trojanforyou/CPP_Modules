#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cstdlib>
#include <ctime>

class Span
{
	private:
		unsigned int _N;
		std::vector<int> _num;

	public:
		Span(unsigned int N): _N(N) {};
		void			addNumber(int add);
		int				shortestSpan();
		unsigned int	longestSpan();
};