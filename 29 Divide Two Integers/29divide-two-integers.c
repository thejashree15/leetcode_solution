#include <limits.h>  // for INT_MIN

int divide(int dividend, int divisor) {
    if (divisor == 0) {
        // Division by zero error
        return 0;  
    }
    if (dividend == INT_MIN && divisor == -1) {
        // Overflow case: result cannot fit in int
        return INT_MAX;  // or handle differently
    }
    return dividend / divisor;
}