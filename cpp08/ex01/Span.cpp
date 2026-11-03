#include "Span.hpp"

void Span::addNumber(int add)
{
	if (_num.size() == _N)
		throw (std::runtime_error("Container is already full"));
	_num.push_back(add);
}

int Span::shortestSpan()
{
	int res = 0;
	int comp = INT_MAX;
	std::vector<int> numCopy = _num;

	if (_num.size() < 2)
		throw(std::runtime_error("Vector is low"));
	std::sort(numCopy.begin(), numCopy.end());
	for (size_t i = 0; i < numCopy.size() - 1; i++)
	{
		res = numCopy[i + 1] - numCopy[i];
		if (res < comp)
			comp = res;
	}
	return (comp);
}

unsigned int Span::longestSpan()
{
	if (_num.size() < 2)
		throw(std::runtime_error("Vector is low"));
	auto min = std::min_element(_num.begin(), _num.end());
	auto max = std::max_element(_num.begin(), _num.end());
	unsigned int res = *max - *min;
	return (res);
}