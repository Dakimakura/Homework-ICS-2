 #include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while (t --){
     long long n;
     scanf("%lld", &n);
     if (n%3 != 0)
      printf("dalao win!\n");
     else
      printf("xinpang win!\n");   
   }
  return 0;
}
