#include <stdio.h>

int main()
{
    int var1 = 13;
    float var2 = 2.5;
    float var3;
    int var4;
    float var5;

    /*
    // Mixed data type expression
    var3 = var1 / var2;
    printf("var3 contains %f\n", var3);

    // Mixed data type expression
    var4 = var1 / var2;
    printf("var4 contains %d\n", var4);*/

    // casting - temporarily changing var1 to be a float
    var5 = (float)var1 / 4;
    printf("var5 contains %f", var5);
    
    return 0;

}