#include <stdio.h>

#define SIZE 10

void printstars();

int main()
{
    //
    printstars();
    
    return 0;
}

void printstars()
{
    for(int i = 0; i<SIZE; i++)
    {
        printf("*");
    }

}