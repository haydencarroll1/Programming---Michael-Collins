#include <stdio.h>
int main ()
{
    float var1, var2, var3, sum, average;
    
    printf("enter 3 floating numbers: ");
    scanf("%f, %f, %f", &var1, &var2, &var3);

    sum = var1 + var2 + var3;
    printf("\nthe sum of the 3 numbers is: %.3f\n",sum);
    
    average = sum/3;
    printf("the average of the 3 numbers is: %.3f\n",average);
    
    return 0;
}