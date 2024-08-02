#include<stdio.h>
int main()
{
      int n;
    int malti;
    printf("enter a number : ");
    scanf("%d",&n);

    int sum=0;
    for (int i=1; i<=10; i++)
    {
        malti=n*i;
        printf("%d \n",malti);
    }
    return 0;
}