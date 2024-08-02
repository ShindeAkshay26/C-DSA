#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int sum=0;
    printf("Enetr a num :");
    scanf("%d",&n);
    for(int i = 1; i < n; i++)
    {

        if (n%i==0)
        {
            sum=sum+i;   
        }
        
    }
    if (sum==n)
            {
                printf("\n %d is a perfect num ",n);
            }
            else
            {
                printf("\n %d is a not perfect num ",n);
            }
    
}