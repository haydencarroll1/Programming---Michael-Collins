/*
Program that uses an array and calculates the average age of a set of people
*/

#include <stdio.h>

// Symbolic name(s) are always listed below the last #include file
#define SIZE 10 // DONT PUT SEMICOLON

int main()
{
 	int ages[SIZE];
 	int sum = 0;
 	float average = 0;
 	int i;
 	int highest = 0;
 	int lowest = 0;

 	printf("Enter the ages of %d people\n", SIZE);

 	// this loop will be used to enter an age into each element of the array
 	for(i = 0; i < SIZE; i++)
 	{
   		// enter an age
   		scanf("%d", &ages[i]);

   		// add the current value in sum to the age entered, i.e., keep a running sum total of ages
   		sum = sum + ages[i];

 	} // end for

    // Let's find the highest and lowest age entered
 	// Assume the highest number in the array ages is inside element 
 	highest = ages[0];

 	// Assume the lowest number in the array ages is inside element 0
 	lowest = ages[0];

 	/* this loop is used to go through each number in the array and check if it is higher than the variable highest and lower than the variable lower. If so, it replaces the values in highest and lowest
 	*/
 	for(i = 0; i < SIZE; i++)
 	{
   		// find the highest number in the array
   		if(highest <  ages[i])
   		{
     			highest = ages[i];
   		} // end if

   		// find the lowest number in the array
   		if(lowest > ages[i])
   		{
     			lowest = ages[i];
   		} // end if

 	} // end for

 	// Display the highest and lowest number in the array 
 	printf("\n\nThe highest age is %d", highest);
 	printf("\n\nThe lowest age is %d", lowest);

 	// cast the variable sum to be a float just for this line of code
 	average = (float)sum / SIZE;

 	printf("\n\nThe average age is %.1f", average);
  
  	return 0;

} // end main()