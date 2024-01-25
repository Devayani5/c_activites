//Write a C program to find the sum of n complex numbers
#include <stdio.h>
struct _complex {
    float real, imaginary;
};
typedef struct _complex Complex;
int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main() 
{
    int n = get_n();
    Complex numbers[n];
    input_n_complex(n, numbers);
    Complex sum = add_n_complex(n, numbers);
    output(n, numbers, sum);
     return 0;
}
int get_n() 
{
    int n;
    printf("Enter the number of arrays: ");
    scanf("%d", &n);
    return n;
}
Complex input_complex() {
    Complex c;
    printf("Enter the real and imaginary parts separated by space: ");
    scanf("%f %f", &c.real, &c.imaginary);
    return c;
}
void input_n_complex(int n, Complex c[n]) {
    for (int i = 0; i < n; ++i) {
        c[i] = input_complex();
    }
}
Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}
Complex add_n_complex(int n, Complex c[n]) {
    Complex sum = {0, 0};

    for (int i = 0; i < n; ++i) {
        sum = add(sum, c[i]);
    }

    return sum;
}
void output(int n, Complex c[n], Complex result)
 {
    printf("(");
    for (int i = 0; i < n - 1; ++i) {
        printf("%.1f+%.1fi + ", c[i].real, c[i].imaginary);
    }
    printf("%.1f+%.1fi) is %.1f+%.1fi\n", c[n - 1].real, c[n - 1].imaginary, result.real, result.imaginary);
}