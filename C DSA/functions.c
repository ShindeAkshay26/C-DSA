#include<stdio.h>

void india()
{
    printf("namste \n");
}
void french()
{
    printf("bonjur \n");
}

int main()
{
    char ch;
    printf("Enter i for india and F for french :");
    scanf("%c",&ch);
    if (ch=='i')
    {
        india();
    }
    else
    {
        french();

    }
    return 0;

}