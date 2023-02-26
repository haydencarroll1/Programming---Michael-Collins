#include <stdio.h>

#define SIZE 3

int menu();
void user_input(float *);
float change_to_euro(float *);
float change_to_dollar(float *);

int main()
{
    int check = 0; //use this to check what number user entered
    float currency_original[SIZE];
    float currency_average;

    while(check < 3) // doesnt leave until user enters 3 in the menu   
    {  
        check = menu(); //calls menu function and returns the users selection

        if(check == 3)
        {
            break;
        }

        else if(check == 1)
        {
            user_input(currency_original);
            currency_average = change_to_euro(currency_original);

            printf("The average is %f", currency_average);
        }
        else if(check == 2)
        {
            user_input(currency_original);
            currency_average = change_to_dollar(currency_original);

            printf("The average is %f", currency_average);
        }
        else
        {
            printf("Incorrect entry, Please try again.");
            check = 0;
        }
    }

    return 0;
}

int menu()
{
    int check;

    printf("\nPlease choose from one of the following choices by entering a number 1-3:\n");
    printf("1. Euro\n");
    printf("2. Dollar\n");
    printf("3. Exit\n");
    
    scanf("%d", &check);

    return check;
}

void user_input(float *currency_original)
{
    printf("Please enter 3 amounts and I will convert them into your chosen currency: \n");

    for(int i = 0; i < SIZE; i++)
    {
        scanf("%f", (currency_original + i));
    }

}
float change_to_euro(float *currency_original)
{
    float currency_result;
    float sum = 0;

    for(int i = 0; i < SIZE; i++)
    {
        currency_result = *(currency_original + i) * 0.9;
        printf("Dollar = %f   Euro = %f\n", *(currency_original + i), currency_result);
        
        sum = sum + currency_result;
    }

    return sum/3;
}

float change_to_dollar(float *currency_original)
{
    float currency_result;
    float sum = 0;

    for(int i = 0; i < SIZE; i++)
    {
        currency_result = *(currency_original + i) * 1.1;
        printf("Euro = %f   Dollar = %f\n", *(currency_original + i), currency_result);
        
        sum = sum + currency_result;
    }

    return sum/3;
}

