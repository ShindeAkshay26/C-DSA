#include<stdio.h>
#include<string.h>

//User defined struct

// struct student
// {
//     int roll_no;
//     float cgpa;
//     char name[50];
// };

// int main()
// {
//     struct student s1={148, 8.82, "Aksahy"};
//     printf("Roll no through structure  :%d \n",s1.roll_no);

//     struct student *ptr=&s1;

//     printf("Roll no through pointer : %d\n",(*ptr).roll_no);

//     //through arrow operator
//     printf("Roll no through arrow pointer operator : %d \n",ptr->roll_no);
//     printf("Name is : %s  \n",ptr->name);
//     printf("Cgpa is %f :\n",ptr->cgpa);

    
//     // printf("Name is :%s\n",s1.name);
//     // printf("Roll no is :%d\n",s1.roll_no);
//     // printf("Your CGPA is :%f\n",s1.cgpa);

//     return 0;
// }

typedef struct  bankofabc{
    char name[100];
    int acc_no;

}bi;
int main()
{
    bi a1;
    a1.acc_no=123456;
    strcpy(a1.name, "Akshay");

    //create a pointer of the structure by using its alis(nickname)

    bi *ptr=&a1;

    printf("Account holder name is :%s \n",ptr->name);//call the variable by its pointer by using its arrow operator
    printf("Account number  is :%d",ptr->acc_no);
    return 0;
};
