#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
  char in[40];
  scanf("%s", in);
  int len = strlen(in);
  long long num = 0;
  for (int i = 0; i < len; i++)
     num += (in[len-1-i] - '0') * pow(2, i);
  printf("%lld\n", num);
  return 0;
}