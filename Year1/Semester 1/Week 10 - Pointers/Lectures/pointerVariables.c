#include <stdio.h>

int main()
{
    int var1;
    char var2;

    int *ptr1;
    char *ptr2;

    var1 = 1;
    var2 = 'A';

    // Store the address of var1 inside ptr1, i.e., make ptr1 point at var1
    ptr1 = &var1;

    // Store the address of var2 inside ptr2, i.e., make ptr2 point at var2
    ptr2 = &var2;

    printf("\n\nvar1 contains %d and is stored at memory address %p\n", var1, &var1);
    printf("var2 contains %c and is stored at memory address %p\n", var2, &var2);

    printf("\nptr1 contains %p", ptr1);
    printf("\nptr2 contains %p", ptr2);

    return 0;
} // end main