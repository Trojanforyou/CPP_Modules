#include "Serializer.hpp"

int main()
{
	Data data;
	bool res = Serializer::deserialize(Serializer::serialize(&data)) == &data;
	if (res == true) 
		std::cout << "true";
	else
		std::cout << "false";
}