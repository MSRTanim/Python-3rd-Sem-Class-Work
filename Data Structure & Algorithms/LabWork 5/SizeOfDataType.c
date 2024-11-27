/*
    Date: 23 October 2024
    Name: MD. SAMIUR RAHMAN TANIM
    Tutor: Dr. Barenya Bikash Hazarika
    Class Status: Present
    Topic: Write a Program in C to find the Size of Data Types.
*/

// Algorithm:
/*
Step 1: Start the program.
Step 2: Declare variables for different data types, such as int, float, double, and char.
Step 3: Use the sizeof operator to determine the size of each data type.
        For each data type, calculate the size and store or print the result.
Step 4: Display the size of each data type (in bytes) on the screen.
Step 5: End the program.
*/

#include <stdio.h>

int main() {
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("Size of long long: %zu bytes\n", sizeof(long long));
    printf("Size of short: %zu bytes\n", sizeof(short));

    return 0;
}
