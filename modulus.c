#include "main.h"

float modulus(float a, float b) {
    if (b != 0) {
        return (int)a % (int)b; // Type casting to int because modulus operation is not defined for floats
    } else {
        return 0; // Error: Division by zero
    }
}

