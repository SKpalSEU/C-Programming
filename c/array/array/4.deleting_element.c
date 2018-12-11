#include <stdio.h>
int main()
{
   int array[100],index , c, n;

   printf("Enter the numbers of elements in array: \n");
   scanf("%d", &n);

   printf("Enter %d elements: \n", n);

   for (c = 0 ; c < n ; c++)
      scanf("%d", &array[c]);

   printf("Enter the index where you want to delete element\n");
   scanf("%d", &index);

   if (index >= n)
      printf("invalaid index.\n");
   else
   {
      for (c = index ; c < n - 1 ; c++)
         array[c] = array[c+1];

      printf("now your array is: \n");

      for(c = 0 ; c < n - 1 ; c++)
         printf("%d ", array[c]);
   }

   return 0;
}
