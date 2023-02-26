#include <stdio.h>
int main()
{
    int input, counter = 0, output;

    printf("Please enter a number 1-5: ");
    scanf("%d",&input);

    while(counter<20)
    {
        counter++;
        output = counter%input;

        if(output == 0)
        {
            printf("%d\n",counter);
        }
    }

return 0;
}