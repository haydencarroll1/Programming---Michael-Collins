#include <stdio.h>

int main()
{   
    int var=0;
    char my_char = ' ';
    
    printf("please enter a number: ");
    scanf("%d",&var);
    printf("your number is %d\n",var);

    printf("and please enter a character: ");
    scanf(" %c", &my_char);
 
    while(getchar() != '\n');

    printf("and your character is %c\n", my_char);


    return 0;
}
   