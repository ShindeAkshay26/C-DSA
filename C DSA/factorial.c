#include<stdio.h>
#include<stdlib.h>
int main()
{
    int fact=1;
    int a,b,i,j,n;
    printf("Enter a number :");
    scanf("%d",&n);

    for ( i=1; i<=n; i++)
    {
        fact=fact*i;
    }

    printf("Factorial of %d is :%d",n,fact);
    return 0;
}
