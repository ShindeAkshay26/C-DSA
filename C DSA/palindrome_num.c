#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,num;
    int rem,rev=0,temp=0;
    printf("Enter a number :");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    
    if(temp==rev)
    {
        printf("a palindrome num ");
    }
    else
    {
        printf(" is not a palindrome num");
    }

    return 0;
}