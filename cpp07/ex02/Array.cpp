#include "Array.tpp"
template <typename T>

Array<T>::Array()
{
    _arr = NULL;
    _size = 0;
}
template <typename T>

Array<T>::Array(unsigned int n)
{
    _arr = new T[n];
}
template <typename T>

Array<T>& Array<T>::operator=(const Array<T> &other)
{
    if (this != &other)
    {
        T *arr = new T[other._size];
        for (unsigned int i = 0; i < other._size; i++)
            arr[i] = other._arr[i];
        delete []this->_arr;
        _arr = arr;
        _size = other._size;
    }
    return (*this);
}

template <typename T>

Array<T>::Array(const Array<T> &other)
{
    T *arr = new T[other._size];
    for (unsigned int i = 0; i < other._size; i++)
        arr[i] = other._arr[i];
    delete []this->_arr;
    _arr = arr;
    _size = other._size;
}