#include <iostream> 
using namespace std;

void addxy(int x, int y, int total){
   cout << "Total from inside addxy: " << x + y << endl;
 }

void subxy(int &x, int &y, int &total){
  total = x - y;
   cout << "Total from inside subxy: " << total << endl;
 }
