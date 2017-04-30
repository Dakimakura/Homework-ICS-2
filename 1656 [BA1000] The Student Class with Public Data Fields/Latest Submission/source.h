#include<iostream>
#include<cstring>
using namespace std;

class Student
{
public:
  int id;
  char name[50]; // Data field
  int age; // Data field
  Student(){
    id = 124;
    char* _name = "No Name";
    strcpy(name, _name);
    age = 0;
  }
  Student(int a){
    id = a;
    char* _name = "No Name";
    strcpy(name, _name);
    age = 0;
  }
  Student(int _id, char* _name, int _age){
    id = _id;
    strcpy(name, _name);
    age = _age;
  }
  //void set(int, char*, int);
  //void print();
};

void set(Student & stu, int _id, char* _name, int _age){
  		stu.id = _id;
    strcpy(stu.name, _name);
    stu.age = _age;
}

void print(Student stu){
  cout << stu.name << " (" << stu.id << ") is " << stu.age << " years old.\n";
}