 #include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t --)
    {
        int n, a[50];
        scanf("%d", &n);
        for (int i = 0; i < n; i ++)
            scanf("%d", &a[i]);
        for (int i = n-1; i >=0 ; i --)
        {
            int flag = 0;
            for (int j = 0; j < i; j ++)
            {
                if (a[j] > a[j+1])
                    {int temp = a[j]; a[j] = a[j+1]; a[j+1] = temp;flag ++;}
                for (int k = 0; k < n; k ++)
                    printf("%d ", a[k]);
                printf("\n"); 
            }
            if(flag == 0)
              break;
        }
    }
}