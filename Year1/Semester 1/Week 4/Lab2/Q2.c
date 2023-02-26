/*
Programming (labs week 4)

Hayden Carroll

10/10/22
*/

#include <stdio.h>
int main()
{ 
int height;
float length, width, volume, surface;

height = 10;
length = 11.5;
width = 2.5;

//part a - calculate the volume
volume = length * width * height;
printf("the volume is: %.1f", volume);

//part b - calculate the surface area
surface = 2*(length*width + length*height + width*height);
printf("\nthe surface area is: %.1f",surface);

return 0;
}
