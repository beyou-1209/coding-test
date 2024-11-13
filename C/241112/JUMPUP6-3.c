#include <stdio.h>

typedef struct
{
    double real;
    double imag;
} Complex;

// Function to divide two complex numbers
Complex divideComplex(Complex x, Complex y)
{
    Complex result;
    double denominator = y.real * y.real + y.imag * y.imag;

    result.real = (x.real * y.real + x.imag * y.imag) / denominator;
    result.imag = (x.imag * y.real - x.real * y.imag) / denominator;

    return result;
}

int main()
{
    // Initialize complex numbers
    Complex x = {1.0, 2.0};
    Complex y = {2.0, -3.0};

    // Divide x by y
    Complex result = divideComplex(x, y);

    // Print the result
    printf("복소수 나눗셈 결과 = %.2f + %.2f i\n", result.real, result.imag);

    return 0;
}
