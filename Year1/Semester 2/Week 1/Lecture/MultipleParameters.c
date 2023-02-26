/*
Program that uses Functions
*/
#include <stdio.h>

//#define SIZE 5

// Function signature or Function prototype
void stars(int, char);



int main()
{
   int no_chars = 0;
   char my_char;


   printf("How many characters to display?\n\n");
   scanf("%d", & no_chars);

   // Clears the input buffer
   while(getchar() != '\n');

   printf("Which character to display?\n\n");
   scanf("%c", & my_char);

    
   // Execute our function stars()
   stars(no_chars, my_char);

    
   printf("\n\nAfter function call");

   return 0;
} // end main()



// Function stars() used to display a set of asterix
//
void stars(int num, char ch)
{
   int i;

   for(i = 0; i < num; i++)
   {
       printf("%c", ch);

   } // end for

} // end stars()