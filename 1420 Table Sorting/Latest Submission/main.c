#include <stdio.h>
#include <string.h>
#define MAX 1000000
int a[MAX];
struct S
{
	int id, score;
	char man[2];
	char name[10];
};
struct S s[MAX];

void print(int n,int a[]);
void genderp(int n);
void namep(int n);
void idp(int n);
void scorep(int n);

int main()
{
	int n, i;
	char temp;
	scanf("%d%c", &n);
	for (i = 0; i < n; i ++)
		scanf("%s%s%d%d", s[i].man, s[i].name, &s[i].id, &s[i].score);
	int choice;
	for (i = 0; i < n; i ++)	a[i] = i;
	while (scanf("%d", &choice) != EOF && choice != -1)
	{
		if (choice == 0)	print(n, a);
		else if (choice == 1)	genderp(n);
		else if (choice == 2)	namep(n);
		else if (choice == 3)	idp(n);
		else if (choice == 4)	scorep(n);
	}
	return 0;
}

void genderp(int n)
{
	int i, j, temp, a[n];
	for (i = 0; i < n; i ++)	a[i] = i;
	for (i = 0; i < n - 1; i ++)
		for (j = 0; j < n - 1 - i; ++ j)
			if (strcmp(s[a[j]].man, s[a[j+1]].man) > 0)
				{temp = a[j]; a[j] = a[j+1]; a[j+1] = temp;}
			else if (strcmp(s[a[j]].man, s[a[j+1]].man) == 0 && s[a[j]].id > s[a[j+1]].id)
				{temp = a[j]; a[j] = a[j+1]; a[j+1] = temp;}
	print(n, a);
}

void namep(int n)
{
	int i, j, temp, a[n];
	for (i = 0; i < n; i ++)	a[i] = i;
	for (i = 0; i < n - 1; i ++)
		for (j = 0; j < n - 1 - i; ++ j)
			if (strcmp(s[a[j]].name, s[a[j+1]].name) > 0)
				{temp = a[j]; a[j] = a[j+1]; a[j+1] = temp;}
			else if (strcmp(s[a[j]].name, s[a[j+1]].name) == 0 && s[a[j]].id > s[a[j+1]].id)
				{temp = a[j]; a[j] = a[j+1]; a[j+1] = temp;}
	print(n, a);
}

void idp(int n)
{
	int i, j, temp, a[n];
	for (i = 0; i < n; i ++)	a[i] = i;
	for (i = 0; i < n - 1; i ++)
		for (j = 0; j < n - 1 - i; ++ j)
			if (s[a[j]].id > s[a[j+1]].id)
				{temp = a[j]; a[j] = a[j+1]; a[j+1] = temp;}
	print(n, a);
}

void scorep(int n)
{
	int i, j, temp, a[n];
	for (i = 0; i < n; i ++)	a[i] = i;
	for (i = 0; i < n - 1; i ++)
		for (j = 0; j < n - 1 - i; ++ j)
			if (s[a[j]].score < s[a[j+1]].score)
				{temp = a[j]; a[j] = a[j+1]; a[j+1] = temp;}
			else if (s[a[j]].score == s[a[j+1]].score && s[a[j]].id > s[a[j+1]].id)
				{temp = a[j]; a[j] = a[j+1]; a[j+1] = temp;}
	print(n, a);
}

void print(int n,int a[])
{
	int i;
	printf("Gender Name   Id       Score\n");
	for (i = 0; i < n; i ++)
	{
		int t = a[i];
		int len = strlen(s[t].name);
		int i = 6 - len;
	//	printf("%d\n", t);
		while (i)
			{s[t].name[len+i-1] = ' '; --i;}
		s[t].name[6] = '\0';
		printf("%s      %s %d %d", s[t].man, s[t].name, s[t].id, s[t].score); 
		if (s[t].score == 100)	printf("  \n");
		else if (s[t].score < 10)    printf("    \n");
		else printf("   \n");
	}
	printf("\n");
}