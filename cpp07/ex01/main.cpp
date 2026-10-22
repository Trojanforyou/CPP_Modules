#include "iter.hpp"

int main()
{
    int addr[5] = {1,2,3,4,10};
    int len = 5;
    iter(addr, len, printNum<int>);
}