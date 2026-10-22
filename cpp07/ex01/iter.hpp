

#include <iostream>
#include <string>

template<typename T1, typename T2, typename T3>
void    iter(T1 *addr, const T2 len, T3 element)
{
    for (int i = 0; i < len; i++)
       element(addr[i]);
}
template<typename T>
void printNum(T num)
{
    std::cout << num << '\n';
}