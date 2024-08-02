#include <stdio.h>
int main()
{
    int f0,f1,f2,f,n=0;
    int temp=0;
    printf("Enter a number :");
    scanf("%d",&n);

    f0=-1;
    f1=1;

    for (int i = 1; i <=n; i++)
    {
        temp=f0+f1;
        printf("%5d",temp);
        
        f0=f1;
        f1=temp;
    }
    
    return 0;
}