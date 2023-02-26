/*
Program Description: This is a basic program which uses multiple functions 
to calculate and display the conversion of a number of values 
in celcius in fahrenheit, the average in celsius and in Kelvin.

Author: Hayden Carroll C22311651

Date: 23/02/2023
*/

#include <stdio.h>

#define SIZE 5

//Function signature
float convert_temp(float*); 
float in_Kelvin(float);

//main
int main()
{
    float degrees_in_celsius[SIZE];//floating point array which takes a user input
    float degrees_in_celsius_average;//to store the return from the funtion
    float average_in_kelvin;

    printf("Please enter %d temperatures in Celsius: \n", SIZE);

    for(int i = 0; i < SIZE; i++)
    {
        scanf("%f", &degrees_in_celsius[i]);
    }// end for

    //calls the funtction to convert the temperature from celsius to fahrenheit
    degrees_in_celsius_average = convert_temp(degrees_in_celsius);

    //displays the average temp in celius
    printf("\nThe average temperature in °C is: %f", degrees_in_celsius_average);

    //calls the function which converts degrees in celsius to Kelvin
    average_in_kelvin = in_Kelvin(degrees_in_celsius_average);

    //displays the average temp in Kelvin
    printf("\nThe average temperature in Kelvin is: %f", average_in_kelvin);


    return 0;
}// end main()

//the function which converts 5 numbers from celsius to fahrenheit and returns an average in celsius
float convert_temp(float *degrees_in_celcius)
{
    float degress_in_fahrenheit = 0;
    float sum = 0;
 
    for(int i = 0; i < SIZE; i++)
    {
        //celsius to fahrenheit conversion
        degress_in_fahrenheit= ((*(degrees_in_celcius + i) * 9) / 5) + 32;

        //displays both
        printf("\n%f°C = %f°F", *(degrees_in_celcius + i), degress_in_fahrenheit);

        //to calculate the average
        sum += *(degrees_in_celcius + i);
    }// end for

    return sum/SIZE;
}// end convert_temp()


//The function which takes a number in celsius and returns it in Kelvin
float in_Kelvin(float degrees_in_celsius)
{
    float temp_in_kelvin;

    //calculate temperature in Kelvin
    temp_in_kelvin = degrees_in_celsius + 273;

    return temp_in_kelvin;
}// end in_kelvin()