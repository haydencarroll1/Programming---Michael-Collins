/*
Program to demonstrate a nested for loop
*/

#include <stdio.h>

int main()
{
    // index variables for the loops
 	int i;
 	int j;
    

 	// This is the outer for loop
 	for(i = 0; i < 3; i++)
 	{
   		// This is the inner for loop
   		for(j = 0; j < 3; j++)
   		{
     		// Display the value of i and j index variables
     		printf("i is %d, j is %d\n", i, j);

   		} // end inner for()

 	} // end outer for()

 	return 0;

} // end main()
