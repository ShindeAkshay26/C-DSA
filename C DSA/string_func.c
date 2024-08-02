#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];
    printf("Enter two strings:\n");
    gets(str1);
    gets(str2);
    
    printf(" %s \n",strcat(str1,str2));
    return 0;

}