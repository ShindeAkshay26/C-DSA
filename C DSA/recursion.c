#include<stdio.h>
//sun of first n numbers
/*int sum(int n);

int main()
{
    printf("sum of first %d numbers ",sum(10));

    return 0;
}

int sum(int n)
{
    if(n==1)
    {
        return ;
    }
    int sumn=sum(n-1);
    int sumnq=sumn+n;
}

//factorial number

int fact(int n);
int fact1,fact2;

int main()
{
    printf("fact is %d",fact(4));
    return 1;

}

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }

    fact1=fact(n-1);
    fact2=fact1*n;
}
//Percentage of marks //
int calcpercentage(int science, int marathi, int math);

int main()
{
    printf("percentage is :%d",calcpercentage(90,92,88));
    return 0;
}

int calcpercentage(int science, int marathi, int math)
{
    float percentage=((science+marathi+math)/3);
    return percentage;
}*/

//febonacci numbers series through the recurssion

int febo(int n);

int main()
{
    printf(" %d ",febo(6));
    return 0;
}

int febo(int n)
{
        if (n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
    
    
    int feb1=febo(n-1);
    int feb2=febo(n-2);
    int febn=febo(n-1)+febo(n-2);
   // printf("febo of %d is : %d",n,febn);
    return febn;
}
