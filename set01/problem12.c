 //Write a C program to find the sum of _n_ complex numbers

//struct _complex {
//	float real,imaginary;};
//typedef struct _complex Complex;

//int get_n();
//Complex input_complex();
//void input_n_complex(int n, Complex c[n]);
//Complex add(Complex a, Complex b);
//Complex add_n_complex(int n, Complex c[n]);
//void output(int n, Complex c[n], Complex result);
#include<stdio.h>
struct compex_number
{
    float,real,imaginary;
};
typedef struct complex_number 
complex;

int get_n();
complex input_complex();
void input_n_complex(int n,complex b);
complex add_n_complex(int n,complex a[n]);
void output(int n,complex c[n],complex result);

int main()
{
    int n = get_n();
    complex complex_numbers[n];
    intput_n_complex(n,complex_numbers);
    complex sum = add_n_complex(n,complex_number);
    output(n,complex_numbers,sum);
    return 0;
}
int get_n()
{
    int n;
    printf("enter the number of complex numbers");
    scanf("%d",&n);
    return n;
}
Complex input_complex()
Complex c;
    printf("enter the real part :");
    scanf("%f",&c.real);
    printf("enter the imaginary part:");
    scanf("%f",&c.imaginary);
    return c;

void input_n_complex(int n, Complex c[n])
{
    for(int i=0;i<1;i++)
    {
        printf("emter complex number %d:\n"i+1);
        c[i]=input complex()
    }
}

Complex add(Complex a, Complex b)

