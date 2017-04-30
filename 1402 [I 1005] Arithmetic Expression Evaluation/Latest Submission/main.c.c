 #include <stdio.h>
#include <string.h>
#include <stdlib.h>

int get(char a[]){
	if(strlen(a) == 0) return 0;
	if(strlen(a) == 1) return atoi(a);
	int i,count;
	for(i = 0,count = 0;i < strlen(a);++ i){
		if(a[i] == '(') count ++;
		if(a[i] == ')') count --;
		if(count <= 1 && a[i] >= 42 && a[i] <= 47) break;
	}
	char b[500] = {0};
	char c[500] = {0};
	for(int m=0;m < i-1;++ m)
		b[m] = a[m+1];
	for(int n=i+1;n < strlen(a) - 1;++n)
		c[n-1-i] = a[n];
	int j = get(b);
	int k = get(c);
	switch(a[i]){
	case '+':return j+k;
	case '-':return j-k;
	case '*':return j*k;
	case '/':return j/k;
 } 
}

int main() {
	char a[500];
	while(scanf("%s",a) != EOF) {
		int num = get(a);
		printf("%d\n",num);
	}
}