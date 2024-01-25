 //Write an C program to find the sum of 2 complex numbers

#include <stdio.h>
struct _complex {
    float real;
    float imaginary;
};

typedef struct _complex Complex;
Complex input_complex() {
    Complex num;
    printf("Enter real and imaginary parts separated by a space: ");
    scanf("%f %f", &num.real, &num.imaginary);
    return num;
}
Complex add_complex(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}
void output(Complex a, Complex b, Complex sum) {
    printf("The sum of %.1f+%.1fi and %.1f+%.1fi is %.1f+%.1fi\n", 
           a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}

int main() 
{

    Complex num1 = input_complex();
    Complex num2 = input_complex();
    Complex sum = add_complex(num1, num2);
    output(num1, num2, sum);
    return 0;
}