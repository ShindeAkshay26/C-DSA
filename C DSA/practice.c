//fibonocci serise
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int i,f1,f2,num,temp;
//     printf("enter a number :");
//     scanf("%d",&num);
//     temp=0;
//     f1=-1;
//     f2=1;

//     for ( i = 0; i <=num; i++)
//     {
//         temp=f1+f2;
//         printf("%5d",temp);
//         f1=f2;
//         f2=temp;

//     }
//     return 0;

// }
//factorial
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, fact = 1, num;
    printf("enter a num :");
    scanf("%d", &num);

    for (i = 1; i <=num; i++)
    {
        fact = fact * i;
    }
    printf("%d", fact);

    return 0;
}
