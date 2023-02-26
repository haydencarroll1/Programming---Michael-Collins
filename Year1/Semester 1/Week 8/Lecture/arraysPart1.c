/*
Program that uses an array and calculates the average age of a set of people
*/

#include <stdio.h>

int main()
{
  	int ages[5];
 	int sum = 0;
 	float average = 0;
 	int i;


 	printf("Enter the ages of 5 people\n");

 	/*
 	// This works but not realistic or efficient
 	scanf("%d", &ages[0]);
 	scanf("%d", &ages[1]);
 	scanf("%d", &ages[2]);
 	scanf("%d", &ages[3]);
 	scanf("%d", &ages[4]);

 	sum = ages[0] + ages[1] + ages[2] + ages[3] + ages[4];
 	*/

 	for(i = 0; i < 5; i++)
 	{
   		// enter an age
   		scanf("%d", &ages[i]);

   	    // add the current value in sum to the age entered, i.e., keep a running sum total of ages
   		sum = sum + ages[i];

 	} // end for

 	// cast the variable sum to be a float just for this line of code
 	average = (float)sum / 5;

 	printf("The average age is %.1f", average);
  
  	return 0;

} // end main()