//Создать параметризованный массив с конструкторами, деструктором и перегруженными операторами + , =.

#include <iostream>
#include"array.cpp"

using namespace std;

int main() {
  Array<double> arr1(4);
  arr1.fill(3.3);
  arr1.print();

  cout<<endl;

  Array<double> arr2(4);
  arr1.fill(4);
  arr1.print();

  cout<<endl;

  Array<double> arr3 = arr1 + arr2;
  arr3.print();
  return 0;
}