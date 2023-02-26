#include <stdio.h>

int main()
{
    int var1;
    char var2;
    int *ptr1;

    var1 = 1;
    var2 = 'A';

    printf("\nvar1 contains %d and is stored at memory address %p\n", var1, &var1);
    printf("var2 contains %c and is stored at memory address %p\n", var2, &var2);

    return 0;
} // end main()