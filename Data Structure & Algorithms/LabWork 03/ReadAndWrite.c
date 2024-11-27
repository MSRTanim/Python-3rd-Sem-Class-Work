/*
    Date: 11 September 2024
    Name: MD. SAMIUR RAHMAN TANIM
    Tutor: Dr. Barenya Bikash Hazarika
    Class Status: Present
    Topic: Write a Program in C to Read-Write the Contents of a File. 
*/

// Algorithm:
/*
Step 1: Start the program.
Step 2: Declare necessary file pointers and variables for storing file data.
Step 3: Open the file in "write" mode.
        If the file cannot be opened, display an error message and exit the program.
        Else, prompt the user to enter the text to be written to the file.
        Write the entered text to the file.
        Close the file after writing.
Step 4: Reopen the file in "read" mode.
        If the file cannot be opened, display an error message and exit the program.
        Else, read the contents of the file and display it on the screen.
        Close the file after reading.
Step 5: End the program.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file;
    char filename[100], ch;

    printf("Enter the filename to write and read: ");
    scanf("%s", filename);

    file = fopen(filename, "w");
    if (file == NULL){
        printf("Error opening file for writing!\n");
        exit(1);
    }

    printf("Enter content to write into the file (Press Ctrl+D to stop):\n");
    while ((ch = getchar()) != EOF){
        fputc(ch, file);
    }

    fclose(file);

    file = fopen(filename, "r");
    if (file == NULL){
        printf("Error opening file for reading!\n");
    }

    printf("\nFile contents:\n");
    while ((ch = fgetc(file)) != EOF){
        putchar(ch);
    }

    fclose(file);

    return 0;
}
