 #include <stdio.h> 
#include <string.h>
char str[100][100];
  char tem[100];

int main(){
  int n;
  scanf("%d",&n);
  
  for(int i = 0; i < n; ++ i){
     scanf("%c",str[i]);
   }
  
  for(int i = 0; i < n;++ i){
     for(int j = i + 1; j < n ; ++ j){
           if(strcmp(str[i],str[j])>0){
                       strcmp(tem,str[i]);
                       strcmp(str[i],str[j]);
                       strcmp(str[j],tem);
                     }
         }
   }
  
  for(int i = 0; i < n;++ i){
     printf("%c\n",str[i]);
   }
}
