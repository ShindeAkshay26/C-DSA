#include<stdio.h>


int main()
{
    FILE *fptr;
    fptr=fopen("file_operations.txt","w");
    int n,i;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if (i%2!=0)
        {
            fprintf(fptr,"%d\n",i);
        }
    }

    fclose(fptr);
    return 0;
}







    // char name[100];
    // float cgpa;


    // printf("Enter a roll number :");
    // scanf("%d",&roll);

    // printf("Enter a name :");
    // scanf("%s",&name);

    // printf("Enter a cgpa :");
    // scanf("%f",&cgpa);
   
    // //fscanf(fptr ,"Roll num is :%d \n",&roll);

    // fprintf(fptr ,"Roll num is :%d \n",roll);

    //fscanf(fptr,"Name is : %s \n",&name);

    // fprintf(fptr,"Name is : %s \n",name);
    
    //fscanf(fptr,"CGPA is :%f",&cgpa);

    // fprintf(fptr,"CGPA is :%f",cgpa);
    
    // fscanf(fptr,"%d",&n);
    // printf("num is :%d \n",n);
    // fscanf(fptr,"%d",&n);
    // printf("num is :%d \n",n);
    // fscanf(fptr,"%d",&n);
    // printf("num is :%d \n",n);
    // fscanf(fptr,"%d",&n);
    // printf("num is :%d \n",n);
    // fscanf(fptr,"%d",&n);
    // printf("num is :%d \n",n);
    
