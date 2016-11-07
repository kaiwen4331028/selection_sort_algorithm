#include <stdio.h>
 
int main()
{
   int array[100], element, number, d, position, swap;
 
   printf("Please enter number of elements\n");
   scanf("%d", &element);
 
   printf("Please enter %d integers\n", element);
 
   for ( number = 0 ; number < element ; number++ )
      scanf("%d", &array[number]);
 
   for ( number = 0 ; number < ( element - 1 ) ; number++ )
   {
      position = number;
 
      for ( d = number + 1 ; d < element ; d++ )
      {
         if ( array[position] > array[d] )
            position = d;
      }
      if ( position != number )
      {
         swap = array[number];
         array[number] = array[position];
         array[position] = swap;
      }
   }
 
   printf("Resulted list in ascending order:\n");
 
   for ( number = 0 ; number < element ; number++ )
      printf("%d\n", array[number]);
	  
	  
	system("pause");
   return 0;
}

