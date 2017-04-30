#include "MyInteger.hpp"
#include <sstream>

using namespace std;

MyInteger::MyInteger(int n){
  value = n;
}

int MyInteger::getValue() const{
  return value;
}

bool MyInteger::isEven() const{
  return !(value % 2);
}

bool MyInteger::isOdd() const{
  return (value % 2);
}

bool MyInteger::isPrime() const{
  if (value == 1) return false;
  for (int i = 2; i < value; i ++)
    	if (value % i == 0)
        return false;
  return true;
}
    
bool MyInteger::isEven(int value){
  return !(value % 2);
}

bool MyInteger::isOdd(int value){
  return (value % 2);
}
    
bool MyInteger::isPrime(int value){
  if (value == 1) return false;
  for (int i = 2; i < value; i ++)
    	if (value % i == 0)
        return false;
  return true;
}
    
bool MyInteger::isEven(const MyInteger& it){
  int value = it.getValue();
  return !(value % 2);
}
    
bool MyInteger::isOdd(const MyInteger& it){
  int value = it.getValue();
  return (value % 2);
}
    
bool MyInteger::isPrime(const MyInteger& it){
  int value = it.getValue();
  if (value == 1) return false;
  for (int i = 2; i < value; i ++)
    	if (value % i == 0)
        return false;
  return true;
}
    
bool MyInteger::equals(int n){
  return n == value;
}
    
bool MyInteger::equals(const MyInteger& it){
  int n = it.getValue();
  return n == value;
}
    
int MyInteger::parseInt(const std::string& s){
  int number;
  stringstream ss(s);
  ss >> number;
  return number;
}