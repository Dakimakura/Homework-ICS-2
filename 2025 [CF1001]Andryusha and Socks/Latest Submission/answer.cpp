//#define LOCAL 
#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <cmath>
#include <map>
#include <sstream>
#include <set>
#include <string>
#include <cstring>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
#ifdef LOCAL
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
#endif
	
	int t = 0, num = 0, maxn = 0;
	int a[100005] = {0};
	int temp;
	cin >> t;
	t *= 2;
	while (t --)
	{
		maxn = max(num, maxn);
		cin >> temp;
		if (a[temp] == 1)
			num --;
		else
		{
			num ++;
			a[temp] = 1;
		} 
		maxn = max(num, maxn);
	}
	cout << maxn << endl;
	
	return 0;
}