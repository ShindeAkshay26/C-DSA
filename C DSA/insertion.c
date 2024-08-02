#include<stdio.h>

int printarray(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    
}
void insertionsort(int a[],int n)
{
    int i;
    int j;
    int temp;
    int key;
    for(i=0;i<n-1;i++)
    {
        key=a[i];
        j=i-1;
        while (j>=0 && a[key]>a[j])
        {

        }
        

    }

}

int main()
{

    int a[]={5,6,3,4,1};
    int n=5;
    printarray(a,n);
    printf("\n");
    insertionsort(a,n);
    printarray(a,n);

    return 0;
}