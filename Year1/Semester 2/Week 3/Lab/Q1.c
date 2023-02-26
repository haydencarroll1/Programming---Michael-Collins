#include <stdio.h>

int even_odd(int);

int main()
{
    int user_input, check;

    printf("Please enter a number and I will check if it's even or odd: ");
    scanf("%d", &user_input);

    check = even_odd(user_input);

    if (check == 1)
    {
        printf("The number %d is odd", user_input);
    }
    else if(check == 0)
    {
        printf("The number %d is even", user_input);
    }
    else
    {
        printf("Error");
    }

    return 0;
}

int even_odd(user_input)
{
    int check = user_input % 2;

    return check;
}