 long long getStepNum(int n){
   long long ans[1005];
   ans[1] = 3;
   for (int i = 2; i < 1003; i ++)
       ans[i] = (ans[i-1] * 2 + 3) % 10007;
   return ans[n];
 }

//1 1 3
//2 3 9
//3 7 21