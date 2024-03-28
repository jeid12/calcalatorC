#include "main.h"

float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        return 0; // Error: Division by zero
    }
}

