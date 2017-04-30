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
const int MAX = 1000008;
int a[MAX], anss[MAX];

int main()
{
#ifdef LOCAL
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
#endif
/* 
	for (int i = 2; i < MAX; i ++)
		if (a[i] == 0)
			for (int j = 2; j*i < MAX; j ++)
				a[i*j] = 1;
		
	int p[MAX]= {0};
	int count = 1;
	for (int i = 2; i < MAX; i ++)
		if (a[i] == 0)
			p[count ++] = i;
	
	vector <unsigned long> anss;
	for (int i = 1; i < count-1; i ++)
	{
		anss.push_back(p[i]*p[i]*p[i]);
		for (int j = i+1; j < count-2; j ++)
			anss.push_back(p[i]*p[j]); 
	}
	sort(anss.begin(), anss.end());
*/
	for (int i = 1; i < MAX; i ++)
		for (int j = 1; j*i < MAX; j ++)
			a[i*j] ++;
	
	int count = 0;
	for (int i = 1; i < MAX; i ++)
		if (a[i] == 4)
			anss[count ++] = i;
	
	int t;
	scanf("%d", &t);
	while (t --)
	{
		int n;
		scanf("%d", &n);
		printf("%d\n", anss[n-1]);
	}
	return 0;
}