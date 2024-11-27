/*
    Date: 28 August 2024
    Name: MD. SAMIUR RAHMAN TANIM
    Tutor: Dr. Barenya Bikash Hazarika
    Class Status: Present
    Topic:  Write a Program in C to find the Factorial of a Given Number using Recursive Function.
*/

// Algorithm:
/*
Step 1: Start the program.
Step 2: Define a recursive function factorial that takes an integer n as an argument.
        If n is 0 or 1, return 1 (base case).
        Else, return n * factorial(n - 1) (recursive case).
Step 3: In the main function, prompt the user to enter a positive integer and store it in a variable num.
Step 4: Call the factorial function with num as the argument and store the result in a variable result.
Step 5: Display the value of result, which is the factorial of the given number.
Step 6: End the program.
*/

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
 
    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}
