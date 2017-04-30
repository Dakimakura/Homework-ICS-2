 int * doubleCapacity(int *list, int size){
   int* arr = new int[size*2];
   for (int i = 0; i < size; i ++)
    	arr[i] = list[i];
   for (int i = size; i < size * 2; i ++)
     arr[i] = 0;
   return arr;
 }