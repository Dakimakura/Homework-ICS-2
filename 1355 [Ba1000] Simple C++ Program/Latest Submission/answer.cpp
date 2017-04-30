#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int a, b;
  double x, y;
  cin >> a >> b >> x >> y;
  cout << pow(a, b) << endl << x * y << endl;
  char arr[10][11];
  for (int i = 0; i < 10; i ++)
     for (int j = 0; j < 10; j ++)
      cin >> arr[i][j];
  for (int i = 9; i >= 0; i --)
  {
     for (int j = 0; j < 10; j ++)
      cout << arr[i][j];
     cout << endl;
  }
}