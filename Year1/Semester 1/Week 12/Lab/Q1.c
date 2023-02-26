/*
Write a program declaring an integer (num1), a character (char1) and 2 pointers (ptr1
that points to an integer and ptr2 that points to a character).

Initialise num1 and char1 to contain an integer and character. Initialise ptr1 to point to
num1 and initialise ptr2 to point to char1. Your program should do the following:

a) Print the contents and address of num1 and char1 (on separate lines).

b) Print the contents of ptr1 and ptr2. (The output should be the same as the addresses
of num1 and char1 above).

c) Using the dereference operator (aka indirection operator), print the contents of
the addresses stored in ptr1 and ptr2.


Do ptr1 and ptr2 have address locations? Check and see, i.e., print the address of ptr1
and ptr2.

Try changing the delimiters (i.e., output type) in your printf statements (i.e., %d, %c,
%p) and see what happens.
*/


#include <stdio.h>

int main()
{
    int num1 = 10;
    char char1 = 'h';

    int *ptr1 = &num1;

    char *ptr2 = &char1;

    printf("num1 contains %d at %p \nchar1 contains %c at %p \n", num1, ptr1, char1, ptr2);

    printf("\nThe contents of ptr1 is %d", *ptr1);


    return 0;
}