#include <stdio.h>

void twopara(char, int);

int main()
{
    char x;
    int y;
    twopara(x, y);

    return 0;
}

void twopara(char x, int y)
{
    printf("Please enter a character: ");
    scanf("%c", &x);

    getchar();

    printf("Please enter a number: ");
    scanf("%d", &y);

    for(int i = 0; i < y; i++)
    {
        printf("%c", x);
    }
}