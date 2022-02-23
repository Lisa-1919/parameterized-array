#ifndef FUNCTION_H
#define FUNCTION_H
#include "array.cpp"

template<typename T> Array<T> &operator+(Array<T> a, Array<T> b)
{
	Array<T> c(a.size + b.size);

	for (int i = 0; i < a.size; i++)
	{
		c.arr[i] = a.arr[i];
	}

	for (int i = a.size; i < a.size + b.size; i++)
	{
		c.arr[i] = b.arr[i - a.size];
	}

	return c;
};

#endif