/*
Title: Question 4 part 5
Author:Hayden Carroll
Date :17/10/22
*/

#include <stdio.h>
int main ()
{
    int var1, bpm, heartbeats;
    bpm = 75;
    
    printf("please enter your age: ");
    scanf("%d",&var1);

    heartbeats = var1*365*24*60*bpm;

    printf("total amount of heartbeats = %d\n", heartbeats);
    return 0;   
}