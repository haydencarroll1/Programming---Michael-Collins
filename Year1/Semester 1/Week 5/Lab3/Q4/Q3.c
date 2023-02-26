#include <stdio.h>
int main()
{
    int var1,var2,var3,var4 = 0;

    printf("please enter an integer: ");
    scanf("%d", &var1);

    printf("\nplease enter another integer: ");
    scanf("%d", &var2);

    printf("\nplease enter another integer: ");
    scanf("%d", &var3);

    printf("\nplease enter one last integer: ");
    scanf("%d", &var4);

    printf("%d, %d, %d, %d\n", var4, var3, var2, var1);

    return 0;
}