/*
Introduction to Structures. Creating your first Structure template
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 5

//Structure template(s)
struct student_rec
{
  int student_ID;
  char firstname[11];
  char surname[21];
  int results[5];
};


//Function signature(s)
// ...
// …



int main()
{
   struct student_rec student1, student2;
   int i;
  
  
   // Assign a numeric student ID to student1
   student1.student_ID = 1234;
  
   // Assign a first name to student1
   // Unfortunately, you cannot assign a string to a character
   // array directly as follows
   //student1.firstname = "Sarah";
  
   //You should use the strcpy() function to assign a string to a
   //char array
   strcpy(student1.firstname,"Sarah");
  
   // Assign a surname to student 1
   strcpy(student1.surname,"Jones");
    
   // Assign a set of results to student1
   student1.results[0] = 100;
   student1.results[1] = 89;
   student1.results[2] = 56;
   student1.results[3] = 95;
   student1.results[4] = 91;

    
   printf("\nStudent 1");
   printf("\nThe structure member contains\n");
    
   printf("\nStudent 1 student ID is: %d", student1.student_ID);
   printf("\nStudent 1 first name is: %s", student1.firstname);
   printf("\nStudent 1 surname is: %s", student1.surname);
   printf("\nStudent 1 results are:\n");
   
   // display the set of 5 results for student1
   for(i = 0; i < SIZE; i++)
   {
          printf("%d\n", student1.results[i]);
   } // end for

    
   // Enter the data for student2 from standard input (keyboard)
   printf("\nStudent 2");
   printf("\nEnter the student ID for Student 2: ");
   scanf("%d", & student2.student_ID);

   printf("\nEnter the first name for Student 2: ");
   //scanf("%s", student2.firstname);
    fgets(student2.firstname, 11, stdin);

   printf("\nEnter the surname for Student 2: ");
   scanf("%s", student2.surname);

   printf("\nEnter %d results for Student 2\n", SIZE);

   // Enter the 5 results into the results structure member for Student 2
   for(i = 0; i < SIZE; i++)
   {
       scanf("%d", & student2.results[i]);

   } // end for

    
   printf("\nStudent 2");
   printf("\nThe structure member contains\n");
    
   printf("\nStudent 2 student ID is: %d", student2.student_ID);
   printf("\nStudent 2 first name is: %s", student2.firstname);
   printf("\nStudent 2 surname is: %s", student2.surname);
   printf("\nStudent 2 results are:\n");

   // display the set of 5 results for student1
   for(i = 0; i < 5; i++)
   {
          printf("%d\n", student2.results[i]);
   } // end for

   return 0;

} // end main()