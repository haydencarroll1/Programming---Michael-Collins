#include <stdio.h>

float convert_temp(float temp[], int size) {
    float sum = 0, avg;
    printf("Celsius\tFahrenheit\n");
    for (int i = 0; i < size; i++) {
        printf("%.2f\t%.2f\n", temp[i], (temp[i] * 9 / 5) + 32);
        sum += temp[i];
    }
    avg = sum / size;
    return avg;
}

float in_Kelvin(float celsius) {
    return celsius + 273;
}

int main() {
    float temp[5], avg, kelvin;
    printf("Enter 5 temperatures in Celsius:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &temp[i]);
    }
    avg = convert_temp(temp, 5);
    printf("Average Celsius temperature is: %.2f\n", avg);
    kelvin = in_Kelvin(avg);
    printf("Average temperature in Kelvin is: %.2f\n", kelvin);
    return 0;
}