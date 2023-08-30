#include <stdio.h>

struct student 
{
    char *c;
};

int main ()
{
    struct student DIT_student; 
    struct student *ptr = &DIT_student;

    ptr->c = "hello";

    printf("%s", ptr->c);

    return 0;
}