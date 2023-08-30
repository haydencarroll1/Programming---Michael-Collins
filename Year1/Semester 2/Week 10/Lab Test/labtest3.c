/*
Program Description: This is a basic program which uses multiple functions and structures 
to take input and store 2 different drivers info and then displays it. First creating a 
structure template with a nested structure inside. Then initialising it within the main and 
sending the structure to the input function using pass by reference, and taking the input for 
the 2 drivers. It then sends these 2 structures to the display function using pass by value.

Author: Hayden Carroll C22311651

Date: 30/03/2023
*/

#include <stdio.h>

#define SIZE 20

// Sructure template 
struct date
{
    int day;
    int month;
    int year;
};

// Structure template
struct driverLicence
{
    char firstName[SIZE];
    char secondName[SIZE];
    struct date DOB;
    int height;
    char eyeColour[SIZE];
    int weight;
    
};


// Function signatures
void enterInfo(struct driverLicence *, int);

void displayInfo(struct driverLicence, int);

int main()
{
    struct driverLicence driver1, driver2;

    // Calling required function
    enterInfo(&driver1, 1);

    enterInfo(&driver2, 2);

    displayInfo(driver1, 1);

    displayInfo(driver2, 2);

    return 0;
}// end main()


void enterInfo(struct driverLicence *ptr, int number)
{
    while(getchar() != '\n');

    // Input for Drivers Firstname
    printf("Please enter Driver %d's first name: ", number);
    fgets(ptr -> firstName, SIZE, stdin);

    // Input for Drivers Second Name
    printf("Please enter Driver %d's second name: ", number);
    fgets(ptr -> secondName, SIZE, stdin);

    // Input for DOB
    printf("Please enter Date of Birth (d/m/y):");

    scanf("%d", & ptr -> DOB.day);
    scanf("%d", & ptr -> DOB.month);
    scanf("%d", & ptr -> DOB.year);

    while(getchar() != '\n');

    // Input for height
    printf("Please enter height in cm: ");
    scanf("%d", & ptr -> height);

    while(getchar() != '\n');

    // Input for eye colour
    printf("Please enter the drivers eye colour: ");
    fgets(ptr -> eyeColour, SIZE, stdin);

    // Input for weight
    printf("Please enter the dirvers weight in Kg: ");
    scanf("%d", & ptr -> weight);

}// end enterInfo()

void displayInfo(struct driverLicence info, int number)
{
    printf("\n\nDriver %d:\n", number);

    // Display the first name
    printf("\nFirstname: %s", info.firstName);

    // Display the surname
    printf("Surname: %s", info.secondName);

    // Display the DOB
    printf("DOB: %2d/", info.DOB.day);
    printf("%02d/", info.DOB.month);
    printf("%04d", info.DOB.year);

    //Display the height
    printf("\nHeight: %d cm", info.height);

    //display the eye colour
    printf("\nEye Colour: %s", info.eyeColour);

    //display the weight
    printf("Weight: %dKg", info.weight);

} // end displayInfo()