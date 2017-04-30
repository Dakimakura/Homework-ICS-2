#include <stdio.h>
int aa[105];
int t,i;

void msort(int *a, int n){
  if(n == 1) return;
  msort(a, (n+1)/2);
  msort(&a[(n+1)/2], n-(n+1)/2);
  
  int tmp[105];
  int n1 = (n+1)/2, n2 = n-(n+1)/2, count = 0; 
  while (n1 && n2){
     if (a[(n+1)/2 - n1] <= a[n - n2]){
       tmp[count++] = a[(n+1)/2 - n1];
       n1 --;
       }
     else{
        tmp[count++] = a[n - n2];
        n2 --;
        }
   }
  if (n1)
     while (n1 --)  tmp[count++] = a[(n+1)/2 - n1 - 1]; 
  else if (n2)
     while (n2 --)  tmp[count++] = a[n - n2 - 1];
  for (i = 0; i < n; i ++)
     a[i] = tmp[i];
  for (i = 0; i < t; i ++)
   {printf("%d", aa[i]); if (i != t-1) printf(" ");}
  printf("\n");
}

int main(){
  scanf("%d", &t);
  for (i = 0; i < t; i ++)
     scanf("%d", &aa[i]);
  msort(aa, t);
  return 0;
}