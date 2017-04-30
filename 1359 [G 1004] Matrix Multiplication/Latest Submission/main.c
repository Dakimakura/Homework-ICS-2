#include <stdio.h>
#include <math.h>

int main()
{
  int n;
  while (scanf("%d", &n) != EOF)
  {
     int a[15][15], b[15][15], ans[15][15];
     for (int i = 0; i < n; i ++) 
     for (int j = 0; j < n; j ++)
      scanf("%d", &a[i][j]);
     for (int i = 0; i < n; i ++) 
     for (int j = 0; j < n; j ++)
      scanf("%d", &b[i][j]);
     
     for (int i = 0; i < n; i ++) 
     for (int j = 0; j < n; j ++)
     {
      ans[i][j] = 0;
      for (int k = 0; k < n; k ++)
        ans[i][j] += a[i][k] * b[k][j];
     }
     
     for (int i = 0; i < n; i ++) 
     {
     for (int j = 0; j < n; j ++)
       {
       printf("%d", ans[i][j]);
       if (j != n-1)
        printf(" ");
       }
     printf("\n");
     }
  }
}