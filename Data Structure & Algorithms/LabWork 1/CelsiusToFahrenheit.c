/*
    Date: 21 August 2024
    Name: MD. SAMIUR RAHMAN TANIM
    Tutor: Dr. Barenya Bikash Hazarika
    Class Status: Absent
    Topic: Write A Program in C to Convert the Celsius value to Fahrenheit.
*/

// Algorithm:
/*
Step 1: Start the program.
Step 2: Declare variables for Celsius and Fahrenheit values.
Step 3: Prompt the user to enter the temperature in Celsius and store it in the celsius variable.
Step 4: Convert the Celsius temperature to Fahrenheit using the formula:
                fahrenheit=(1.8 × celsius)+32.0
Step 5: Display the calculated Fahrenheit value.
Step 6: End the program.
*/

#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (1.8 * celsius) + 32.0;
}

int main() {
    float celsius, fahrenheit;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsiusToFahrenheit(celsius);

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}