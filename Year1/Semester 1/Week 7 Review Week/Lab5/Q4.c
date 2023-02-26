#include <stdio.h>
int main()
{
    int counter;

    for(counter=1; counter<11; counter++)
    {
        printf("%d - ",counter);

        switch(counter)
        {
            case 1 :
            {
                printf("This number is one\n");
                break;
            }

            case 2 :
            {
                printf("This number is two\n");
                break;
            }

            case 3 :
            {
                printf("This number is three\n");
                break;
            }
            
            case 4 :
            {
                printf("This number is four\n");
                break;
            }
            case 5 :
            {
                printf("This number is five\n");
                break;
            }

            case 6 :
            {
                printf("This number is six\n");
                break;
            }

            case 7 :
            {
                printf("This number is seven\n");
                break;
            }
            
            case 8 :
            {
                printf("This number is eight\n");
                break;
            }
            case 9 :
            {
                printf("This number is nine\n");
                break;
            }

            case 10 :
            {
                printf("This number is ten\n");
                break;
            }
        }


    }
    return 0;
}