#include<stdio.h>

int printarray(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    
}
void bubblesort(int a[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
               int temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp; 
            }
            
        }
        
    }
    

}

int main()
{

    int a[]={5,6,3,4,1};
    int n=5;
    printarray(a,n);
    printf("\n");
    bubblesort(a,n);
    printarray(a,n);

    return 0;
}