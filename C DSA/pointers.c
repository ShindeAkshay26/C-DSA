#include<stdio.h>

int main()
{
    int age=22;

    int *ptr=&age;

    int **pptr=&ptr;

    printf("%u \n",**(&ptr));//address
    printf("%u \n",**(pptr));
    //printf("%d\n",age);//value

  //  printf("%u\n",ptr);//address
   // printf("%d\n",*ptr);//value

   // printf("%u\n",&ptr);//address
   // printf("%d",*(&age));///value

}