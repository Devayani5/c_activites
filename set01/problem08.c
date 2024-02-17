///   Write a C program to find sum of _n_ different numbers entered by the user.


//int input_array_size();
//void input_array(int n, int a[n]);
//int sum_n_array(int n, int a[n]);
//void output(int n, int a[n],int sum);


#include<stdio.h>
int main()
{
    int n,sum;
    n = input_array_size();
    int a[n];
    intput_array(n,a);
    sum = sum-n_array(n,a);
    output(n,a,sum);
    return 0;
}
int input_array_size()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    for(int i =0;i,n;i++)
    {
        printf("Enter the array:");
        scanf("%d",&a[i]);
    }
}
int sum_n_array(int n, int a[n])
{
    int sum=0;
    for(int i =0;i<n;i++)
    {
        sum +=a[i];
    }
    return sum ;
}

void output(int n, int a[n],int sum)
{
    for(int i =0;i<n;i++)
    {
        printf("%d",a[i]);
        if(i<n-1){
            print("+");
        }
    }
    printf("is %d",sum);
}

