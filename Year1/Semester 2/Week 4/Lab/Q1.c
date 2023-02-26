#include <stdio.h>

int areaOfSquare(int);

int areaOfCircle(int *);

int main()
{

    int sideOfSquare, squareArea; 
    int radius, circleArea;

    printf("Please enter the length of the side of a square and I will find the area: \n");
    scanf("%d", &sideOfSquare);

    printf("And please enter the length of the radius of a circle and I will also find the area: \n");
    scanf("%d", &radius);

    squareArea = areaOfSquare(sideOfSquare);

    circleArea = areaOfCircle(&radius);

    printf("The area of the square is %d and  the circle is %d", squareArea, circleArea);


    return 0;
}

int areaOfSquare(length)
{
    int area = length * 4;

    return area;
}

int areaOfCircle(int *length)
{
    int area = (*length * *length) * 3.14;
    
    return area;
}