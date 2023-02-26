#include <stdio.h>

int main(void)
{
    int var1;
    int var2;
    int var3;
    int var4;

    var1 = var2 = 1;

    // This is POST-Increment
    var3 = var1++;

    //This is PRE-Increment
    var4 = ++var2;

    printf("var1 is %d, var2 is %d\n", var1, var2);
    printf("var3 is %d, var4 is %d\n", var3, var4);
    
    return 0;
}