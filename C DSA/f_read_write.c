#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr=fopen("sum.txt","r");

    int a;
    fscanf(fptr,"%d",&a);
    int b;
    fscanf(fptr,"%d",&b);

    fclose(fptr);

    fptr=fopen("sum.txt","w");
    int sum=a+b;
    fprintf(fptr,"Sum is :%d",sum);
    
    fclose(fptr);
    return 0;

}