/*
This program passes a 1-D array to a function, which calculates the sum
of the array and display to standard output (screen)
*/

#include <stdio.h>

#define SIZE 5

// Function signature
int sum_array(int *);


int main()
{
   int values[SIZE];
   int i;
   int sum = 0;


   printf("Enter %d numbers\n", SIZE);

   //Enter data into the array
   for(i = 0; i < SIZE; i++)
   {
       scanf("%d", & values[i]); // scanf("%d", & *(values + i));

   } // end for

   // Calculate the sum of the contents of the array
   sum = sum_array(values);

   // Display the sum of the contents of the array
   printf("\nThe sum of the array is %d", sum);

   return 0;

} // end main()



/* Function sum_array() will calculate the sum of the contents of any 1-D array
*/
int sum_array(int *my_array)
{
   int total = 0;
   int i;

    
   // calculate the total of the array
   for(i = 0; i < SIZE; i++)
   {
       total = total + *(my_array + i);

   } // end for

   return total;

} // end sum_array()