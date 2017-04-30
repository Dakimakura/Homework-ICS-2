#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string ss[15][2100];
string s[650];

void Add(int n)
{
	int t = pow(2, n-1);
	for (int i = 1; i <= t; i ++)
		ss[n][i] = s[t] + ss[n-1][i] + s[t];
}

void Dou(int n)
{
	int t = pow(2, n-1);
	for (int i = t+1; i <= 2*t; i ++)
		ss[n][i] = ss[n-1][i-t] + ss[n-1][i-t];
}

int main()
{
	const string a = " /\\ ", b = "/__\\", end = "\n";
	for (int i = 0; i < 650; i ++) for (int j = 0; j < i; j ++) s[i] += " ";
	ss[1][1] = a;
	ss[1][2] = b;
	for (int i = 2; i < 11; i ++)
	{
		Add(i);
		Dou(i);
	}
	
	int n; 
	
	while(cin >> n && n)
	{
		for (int i = 1; i <= pow(2,n); i ++)
			cout << ss[n][i] << end;
		cout << end;
	}
}