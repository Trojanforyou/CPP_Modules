#include "Array.tpp"

int main()
{
	Array<int> a(3);
	Array<int> b(a);
	for (int i = 0; i < a.size() - 1; i++)
		std::cout << a[i];
}