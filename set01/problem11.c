#include<stdio.h>
struct_complex 
{
    float real;
    float img;
};
typedef struct_complex complex;

complex input_complex();
complex add_complex(Complex a,complex b);
void output(complex a,complex b,complex sum);

int main()
{
    complex a,b,result;
    printf("For first complex number:\n");
    a = input_complex();
    printf("\n For second complex number:\n");
      b = input_complex();
  result =add_complex(a,b);
  output(a,b,result);
  return 0; 
}
complex input_complex()
{
    complex x;
    printf("Enter real part:");
    scanf("%f",&x.real);
    printf("enter imaginary part:");
    scanf("%f",&x.img);
    return x;

}
complex add_complex(Complex a,Complex b)
{
    complex sum;
    sum.real = a.real+b.real;
    sum.img = a.img+b.img;
    return sum;
}
void output(Complex a,complex b,complex sum)
{
    printf("The sum of :");
    printf("%f+%fi and %.f+%.fi is %.f+%.fi\n",a.real,a.img,b.real,b.img);
}