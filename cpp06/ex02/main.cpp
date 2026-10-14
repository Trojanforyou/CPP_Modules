#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include "Identify.hpp"

int main()
{
	
	srand(time(0));
	Base *type = generate();
	identify(type);
	identify(*type);
	delete(type);
}