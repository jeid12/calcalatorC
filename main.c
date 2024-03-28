#include <stdio.h>
#include <math.h>
#include "main.h"

int main() {
    float num1 = 10.5, num2 = 5.5;
    float result;

    // Add
    result = add(num1, num2);
    printf("Addition: %.2f\n", result);

    // Subtract
    result = subtract(num1, num2);
    printf("Subtraction: %.2f\n", result);

    // Multiply
    result = multiply(num1, num2);
    printf("Multiplication: %.2f\n", result);

    // Divide
    result = divide(num1, num2);
    printf("Division: %.2f\n", result);

    // Modulus
    result = modulus(num1, num2);
    printf("Modulus: %.2f\n", result);

    // Cosine
    result = cosine(45 * M_PI / 180); // Convert degrees to radians
    printf("Cosine: %.2f\n", result);

    return 0;
}

