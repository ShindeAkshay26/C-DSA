// write a function to calculate the sum , product and average of 2 numbers
// and print that average in main funcuion
#include<stdio.h>

void dowork(int a, int b,int *average, int *sum, int *prod);

int main()
{
    int a=5,b=6;
    int average, sum, prod;
    dowork(a,b, &average ,&sum ,&prod);
    printf("Average is : %d\nsum is:%d\nproduct is:%d\n\n",*(&average),*(&sum),*(&prod));

    printf("Average is : %d\nsum is:%d\nproduct is:%d",average,sum,prod);
    return 0;
}

void dowork(int a, int b ,int *average, int *sum, int *prod)
{
     *average=(a+b)/2;
     *sum=a+b;
     *prod=a*b;

}
