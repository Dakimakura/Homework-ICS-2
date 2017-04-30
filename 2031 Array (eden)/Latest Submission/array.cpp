#include "array.hpp"

typedef int* pointer;
typedef unsigned int size_t;
typedef int data_type;

array::array(size_t size){
  _size = size;
  _data = new int[size];
}

array::~array(){
  delete []_data;
}
  // Capacity
  // Return maximum size
size_t array::max_size(){
  return _size;
}
  // Element access
  // Access element
  // int& operator[](const int &i) {return data[i];}
  // Access element
data_type& array::at(const data_type& i){
  return _data[i];
}
  // Access first element
data_type& array::front(){
  return _data[0];
}
  // Access last element
data_type& array::back(){
  return _data[_size - 1];
}
  // Get pointer to data
pointer array::data(){
  return _data;
}
 
  // Modifiers
  // Fill array with the same value
void array::fill(const data_type& value){
  for (int i = 0; i < _size; i ++)
    _data[i] = value;
}
  // Resize the array (newSize > oldSize)
void array::resize(int newSize){
  pointer newPointer = new int[_size];
  for (int i = 0; i < _size; i ++)
    newPointer[i] = _data[i];
  delete []_data;
  _data = new int[newSize];
  for (int i = 0; i < _size; i ++)
     _data[i] = newPointer[i];
  _size = newSize;
  delete []newPointer;
}
  // Sort the array in the section [from, to)
void array::sort(int from, int to){
  for (int i = from; i < to; i ++)
    for (int j = i; j < to; j ++)
      if (_data[i] > _data[j])
      {
        int temp = _data[j];
        _data[j] = _data[i];
        _data[i] = temp;
      }
}