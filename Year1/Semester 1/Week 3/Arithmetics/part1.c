#include <stdio.h>

int main()
{
    int var1;
    int var2;
    char my_char;
 
    
    var1 = 1;
    var2 = 2;
    my_char = 'a';
    
    
    printf("var1 contains %d, var2 contains %d\n", var1, var2);
    
    // Increment var1, i.e., add 1 to the contents of var1
    var1 = var1 + 1;
    var1++;
    printf("var1 contains %d, var2 contains %d\n", var1, var2);
    
    // Decrement var2, i.e., subtract 1 from the contents of var2
    // var2 = var2 - 1;
    var2--;
    printf("var1 contains %d, var2 contains %d\n", var1, var2);
    
    // Redundant Code
    //var1 = var1 * 1;
    //var1**;
    //
    //var1 = var1 / 1;
    //var1//;
    
    my_char++;
    printf("my_char is %c", my_char);
    //using ASCII a turns to b
    return 0;

}