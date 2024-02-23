// Write a C program to find the sum of 2 complex numbers

//struct _complex {
//	float real;
//	float imaginary}
//typedef struct _complex Complex;

//Complex input_complex();
//Complex add_complex(Complex a, Complex b);
//void output(Complex a, Complex b, Complex sum);
#include <stdio.h>

struct _complex {
	float real;
	float imaginary;
};

typedef struct _complex Complex;

Complex input_complex(const char *prompt) {
	Complex c;
	printf("%s", prompt);
	scanf("%f %f", &c.real, &c.imaginary);
	return c;
}

Complex add_complex(Complex a, Complex b) {
	Complex sum;
	sum.real = a.real + b.real;
	sum.imaginary = a.imaginary + b.imaginary;
	return sum;
}

void output(Complex a, Complex b, Complex sum) {
	printf("First complex number: %.2f + %.2fi\n", a.real, a.imaginary);
	printf("Second complex number: %.2f + %.2fi\n", b.real, b.imaginary);
	printf("Sum: %.2f + %.2fi\n", sum.real, sum.imaginary);
}

int main() {
	Complex a = input_complex("Enter first complex number (real imaginary): ");
	Complex b = input_complex("Enter second complex number (real imaginary): ");
	Complex sum = add_complex(a, b);
	output(a, b, sum);
	return 0;
}