#include <stdio.h>
#include <string.h>

#define SIZE 100

int main()
{
    char first_sentence[SIZE] = {"My sentence is : "};
    char user_input[SIZE];
    int length;

    printf("Please enter a sentence: ");
    fgets(user_input, SIZE-1, stdin);

    length = strlen(user_input);

    strcat(first_sentence, user_input);

    printf("My sentence contains %d characters \n", length);
    printf("%s", first_sentence);

    return 0;
}