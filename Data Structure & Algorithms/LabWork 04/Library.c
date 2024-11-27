/*
    Date: 18 September 2024
    Date: 23 October 2024
    Name: MD. SAMIUR RAHMAN TANIM
    Tutor: Dr. Barenya Bikash Hazarika
    Class Status: Present
    Topic: Write a Program in C Using Standard I/O Library Function with Arguments and Return Value.
*/

// Algorithm:
/*
Step 1: Start the program.
Step 2: Define a function add(int a, int b) that:
        Returns the sum of a and b.
Step 3: In the main() function:
        Declare three integer variables: num1, num2, and result.
Step 4: Prompt the user to enter the first number:
        Display the message "Enter the first number: ".
        Read the input and store it in num1.
Step 5: Prompt the user to enter the second number:
        Display the message "Enter the second number: ".
        Read the input and store it in num2.
Step 6: Call the add() function with num1 and num2 as arguments:
        Store the returned value in result.
Step 7: Display the result:
        Print the message "The sum of num1 and num2 is: result".
Step 8: End the program.
*/

#include <stdio.h>

int add(int a, int b){
    return a + b;
}

int main(){
    int num1, num2, result;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    result = add(num1, num2);

    printf("The sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
