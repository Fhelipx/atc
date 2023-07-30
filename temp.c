#include <stdio.h>

float convertToCelsius(int type, float temperatureScale) {
    switch(type) {
        case 1:
            return temperatureScale;
            break;
        case 2:
            return ((temperatureScale - 32)/9) * 5;
            break;
        case 3:
            return temperatureScale - 273.13;
        default:
            return 1;
            break;
    }
}

float convertToFahrenheit(int type, float temperatureScale) {
    switch(type) {
        case 1:
            return (160 + (9 * temperatureScale))/5;
            break;
        case 2:
            return temperatureScale;
            break;
        case 3:
            return ((9 * (temperatureScale - 273.15))/5) + 32;
        default:
            return 1;
            break;
    }
}

float convertToKelvin(int type, float temperatureScale) {
    switch(type) {
        case 1:
            return temperatureScale + 273.15;
            break;
        case 2:
            return ((temperatureScale - 32) * 5)/9 + 273.15;
            break;
        case 3:
            return temperatureScale;
        default:
            return 1;
            break;
    }
}

float finalConversion(int type1, int type2, float temp1) {
    switch(type2) {
        case 1:
            printf("Temperature in Celsius: %.1f", convertToCelsius(type1, temp1));
            break;
        case 2:
            printf("Temperature in Fahrenheit: %.1f", convertToFahrenheit(type1, temp1));
            break;
        case 3:
            printf("Temperature in Kelvin: %.1f", convertToKelvin(type1, temp1));
            break;
        default:
            printf("This Temperature Scale doesn't exist! Try again.");
            break;
    }
}

int main() {

    float temperature;
    int typeFrom, typeTo;

    printf("! Welcome to the Temperature Converter !\n\n");
    printf(" 1 - Celsius \n 2 - Fahrenheit \n 3 - Kelvin \n\n");

    printf("|| First Example Input: 3 34.5 || In this example, the temperature that is will be converted from is 34.5 Kelvin \n \n");

    printf("Choose the first temperature to be converted from and input the values: ");
    scanf("%d %f", &typeFrom, &temperature);
    printf("\n || Second Example Input: 2 || In this example, the temperature scale that will be converted to is Kelvin\n \n");
    printf("Now, Choose the second temperature Scale to be converted to: ");
    scanf("%d", &typeTo);
    finalConversion(typeFrom, typeTo, temperature);

    return 0;
}