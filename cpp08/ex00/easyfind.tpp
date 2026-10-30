#include "easyfind.hpp"

template <typename T>

typename T::iterator easyfind(T &val, int exp)
{
	typename T::iterator iter = std::find(val.begin(), val.end(), exp);
	
	if (iter == val.end())
		throw (std::runtime_error("Value not found"));
	return (iter);
}