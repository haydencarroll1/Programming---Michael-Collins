#include <stdio.h>

void minAndMax(int, int, int);

int main()
{
    int x, y, z;
    minAndMax(10, 20, 30);
}

void minAndMax(x, y, z)
{

    if(x>y && x>z)
    {
        printf("The Highest value is x");
    }
    if(y>x && y>z)
    {
        printf("The Highest value is y");
    }
    if(z>y && z>x)
    {
        printf("The Highest value is z");
    }

    if(x<y && x<z)
    {
        printf("\nThe Lowest value is x");
    }
    if(y<x && y<z)
    {
        printf("\nThe Lowest value is y");
    }
    if(z<y && z<x)
    {
        printf("\nThe Lowest value is z\n");
    }

}