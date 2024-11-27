#include <stdio.h>


int main() {

    char *argv[3] = {"myprogram", "5", "10"};
    int argc = 3;

    if(argc != 3) {
        printf("Usages: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    int sum = num1 + num2;

    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    return 0;
}
