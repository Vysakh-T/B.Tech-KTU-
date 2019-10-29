#include <stdio.h>
 
void main()
{
   int array[100], pos, i, n;
 
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);
 
   printf("Enter the position where you wish to delete element\n");
   scanf("%d", &pos);
 
   if (pos >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (i = position - 1; i < n - 1; i++)
         array[i] = array[i+1];
 
      printf("Resultant array:\n");
       for (i = 0; i < n - 1; i++)
         printf("%d\n", array[c]);
   }
}