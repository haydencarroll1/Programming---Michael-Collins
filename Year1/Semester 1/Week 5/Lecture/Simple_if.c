#include <stdio.h>
int main()

{
    float bank_balance = 0;


    printf("Enter a bank balance\n");
    scanf("%f", &bank_balance);

    // if the bank balance is greater than zero
    if (bank_balance > 0)
    {
        printf("\nYou have money");
    }

    // if the bank balance is less than or equal to zero
    if (bank_balance <= 0)
    {
        printf("\nYou have no money - go study Computer Science");
    }

return 0;
}