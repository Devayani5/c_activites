 //Write a C program to compare two strings, character by character.

//void input_two_strings(char *string1, char *string2);
//int stringcompare(char *string1, char *string2);
//void output(char *string1, char *string2, int result);
#include<stdio.h>
struct_complex;
{
    float real;
    float imaginary;

};
typedef struct_complex complex;
complex input_complex()
{
    complex num;
    printf("enter the real part:");
    scanf("%f",&num.real);
    printf("enter the imaginary part:");
    scanf("&f",&num.imaginary);
    return num;
}
complex add_complex(complex a,complex b)
{
    complex sum;
    sum.real=a.real+b.real;
    sum.imaginary = a.imginary+b.imaginary
    return sum;
}
void output(complex a,complex b,complex sum)
 {
    printf("Sum of %f +%f and %f+%fi is %f+%fi",a.real,b.real,a.imaginary,b.imaginary,sum.real,sum.imaginary);
}
int main()
{
    complex num1=input_complex();
    complex num2=input_complex();
    complex sum=add_complex(num1,num2);
    output(num1,num2,sum);
    return 0;
}