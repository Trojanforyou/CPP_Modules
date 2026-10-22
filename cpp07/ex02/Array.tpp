#pragma once
#include <string>
#include <iostream>

template<typename T>

class Array
{
    private:
        T *_arr;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int n);
        Array<T>& operator=(const Array<T>& other);
        Array(const Array<T> &other);
        T& operator[](unsigned int &index);
};