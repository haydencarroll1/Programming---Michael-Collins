#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    int hour, minute, second;
    int delay = 1000;

    printf("Set time: \n");
    scanf("%d %d %d", &hour, &minute, &second);
    int getchar(scanf )
    printf("%d %d %d",hour, minute, second);

    /*if (hour>12||minute>59||second>59)
    {
        printf("Error");
        exit(0);
    }*/
    while(1)
    {
        second++;
        if(hour>12)
        {
            hour = 1;
        }

        if(minute>59)
        {
            hour++;
            minute = 0;
        }

        if(second>59)
        {
            minute++;
            second = 0;
        }
        printf("%d:%d:%d",hour,minute,second);
        sleep(delay);
    }

    return 0;
}