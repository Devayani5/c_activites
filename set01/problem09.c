 //Write a C program to find the [square root](https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Babylonian_method) of a number.
//float input();
//float square_root(float n);
//void output(float n, float sqrroot);
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 int main()
 {
    float n,sqrt;
    n=input();
    sqrt=square_root(n);
    output(n,sqrt);
 }
 float input()
 {
    float n;
    printf("enter the number\n");
    scanf("%f",&n);
    return n;
 }
float square_root(float n)
{
    float x_old=1,x_new=n/2;
    float precision=0.000001;
    while(fabs(x_new-x_old)>precision)
    {
        x_old=x_new;
        x_new=(x_old+n/x_old)/2;
    }
    return x_new;
}
void output(float n, float sqrroot)
{
    printf("the squaretoot of %f",n);
    printf("is %f ",sqrroot);
}