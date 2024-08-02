#include<stdio.h>

int main()
{
    int i,j,temp;
    int a[]={12,1,4,5,5,2};

    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%5d\n",a[i]);
        }
        
        printf("%5d",a[i]);
    }
  //  printf("Array is %5d:",a[i]);

    return 0;
}