#ifndef ARRAY_H
#define ARRAY_H
#include<iostream>

using namespace std;

template <typename T> class Array{
  private:
    int size;
    T *arr;
  public:

  Array();
  Array(int);

 
  friend Array &operator+(Array a, Array b);

	Array &operator=(Array & other) noexcept
	{
		if (this == &other)
		{
			return * this;
		}
		delete[] arr;
		//arr = exchange(other.arr, nullptr);
     arr = other.arr;
     other.arr = nullptr;
		//size = exchange(other.size, 0);
     size = other.size;
     other.size = 0;
		return * this;
	}

	void fill(T value)
		{
			for (int i = 0; i < size; i++)
			{
				arr[i] = value;
			}
		}

  void print()
  {
    cout<<size<<endl;
	  cout << "[";
	  for (int i = 0; i < size; i++)
	    {
		    cout << arr[i];
		    i == size - 1 ? cout << "]" : cout << ", ";
	    }
}

		~Array()
		{
			delete[] arr;
		}
};

 template<typename T> Array<T>::Array(){
    size = 0;
    arr = nullptr;
  }

	template<typename T> Array<T>::Array(int _size)
		{
			size = _size;
			arr = new T[_size];
		};



#endif