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
const int MAX = 105;
int n, m;
char s[MAX];

int solve()
{
	fill(s, s+n+1, 'O');
	for (int j = 1; j <= m; j ++)
		for (int i = j; i <= n; i += j)
			s[i] = (s[i] == 'O')? '#' : 'O';
	for (int i = 1; i <= n; i ++)
		cout << s[i];
	cout << "\n";
}

int main()
{
#ifdef LOCAL
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
#endif
	cin >> n >> m;
	solve();
	
	return 0;
}