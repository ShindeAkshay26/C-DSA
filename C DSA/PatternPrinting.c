#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
           if(i==0 || j==0 || i==n-1 || j==n-1)
           {
                 printf("%d \t",n);
           }
           else{

                printf("%d",n-j);
           }
        }
        printf("\n");
    }
    return 0;
}