#include <stdio.h>

void print_banner(void) {
    printf("Nebula Labs Workshop\n");
    printf("C Calculator - Bryant\n");
}

/* Adds a and b and returns the result */
int add(int a, int b) {
    return a + b;
}

/* Subtracts b from a and returns the result*/
int subtract(int a, int b) {
    return a - b;
}

/* 
 * Add the multiply function below
 * Multiplies a and b and returns the result
 */
int multiply(int a, int b)
{
	return a * b;
}

int main(void) {
    print_banner("Nebula Labs Git/Github Workshop\n");

    int num1 = 12;
    int num2 = 4;

    printf("Inputs: a = %d, b = %d\n", num1, num2);
    printf("----------------------------------------\n");
    printf("Addition:       %d + %d = %d\n", num1, num2, add(num1, num2));
    printf("Subtraction:    %d - %d = %d\n", num1, num2, subtract(num1, num2));
    printf("Multiplication: %d * %d = %d\n", num1, num2, multiply(num1, num2));

    return 0;
}
