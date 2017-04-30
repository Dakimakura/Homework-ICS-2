 #include <stdio.h>
#define false 0
#define true 1
int a[10];

int next_permutation(int l, int r)
{
	if (l == r)
		return false;
	int j = r - 1, k = r;
	while (a[j] > a[j+1])	
		j --;
	if (j == 0)
		return false;
	while (a[j] > a[k])
		k --;
	//swap(a[j], a[k]);
		int temp = a[j];
		a[j] = a[k];
		a[k] = temp;
	//reverse(j+1, r);
		j ++;
		while (j <= r)
		{
			int temp = a[r];
			a[r--] = a[j];
			a[j++] = temp;
		}
	return true;
}

int main()
{
	int n, i;
	scanf("%d", &n);
	for (i = 0; i <= n; i ++)	a[i] = i;
	for (i = 1; i < n; i ++)
			printf("%d ", a[i]);
		printf("%d\n", a[n]);
	while (next_permutation(1,n))
	{
		for (i = 1; i < n; i ++)
			printf("%d ", a[i]);
		printf("%d\n", a[n]);
	}
	return 0;
}