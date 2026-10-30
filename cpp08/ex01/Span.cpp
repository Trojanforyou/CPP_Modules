#include <Span.hpp>

void Span::addNumber(int add)
{
	if (_num.size() == _N)
		throw (std::runtime_error("Container is already full"));
	_num.push_back(add);
}