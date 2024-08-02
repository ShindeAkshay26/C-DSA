#include<stdio.h>

int main()
{
   /* int n;
    int sum=0;

    printf("Enter the size of array :");
    scanf("%d" ,&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<n;j++)
    {
        printf("%d \t",arr[j]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];   
    }
    printf(" Your Sum is :%d",sum);
*/
    reverse(5);
    return 0;
}


int reverse(int n)
{
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<n;j++)
    {
        printf("%d \t",arr[j]);
    }

    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int j=0;j<n;j++)
    {
        printf("%d \t",arr[j]);
    }
    return 0;
}