#include <stdio.h>
#include <stdlib.h>

// creating a structure for the stack

struct stack
{
    int size;
    int top;
    int *arr;
};

// Empty function to check stack is Empty or not

int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Full function to check stack is full or not

int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// push function to push elements in stack with return type void becaus he's not return any value
void push(struct stack *ptr, int val)
{
    if (isfull(ptr))
    {
        printf("Stack is overflow!!");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

// pop functio to pop element from stack with return datatype int because he is return the popped value

int pop(struct stack *ptr)
{
    if (isempty(ptr))
    {
        printf("Stack is empty cant pop");
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;

        return val;
    }
}

// peek() function to check the position index or array index  of the stack

int peek(struct stack *ptr, int i)
{

    int arrayindex = ptr->top - i + 1;
    if (arrayindex < 0)
    {
        printf("Invalid position of  stack");
        return -1;
    }
    else
    {
        return ptr->arr[arrayindex];
    }
}

// function to find stack top

int stacktop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}

//function to find stack bottom 

int stackbottom(struct stack *ptr)
{
    return ptr->arr[0];
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 5;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    printf("Stack has been implmented succesfully \n");

    printf("Stack before push ::%d \n", isempty(sp)); // checking stack is empty or full before push()
    printf("Stack before push ::%d \n", isfull(sp));  // checking stack is empty or full before  push()
    push(sp, 10);
    push(sp, 9);
    push(sp, 4);
    push(sp, 11);
    push(sp, 6);
    printf("Stack After push ::%d \n", isempty(sp)); // checking stack is empty or full after push()
    printf("Stack After push ::%d \n", isfull(sp));  // checking stack is empty or full after push()

    printf("%d popped from the stack \n", pop(sp)); // popping the elements

    printf("Stack After push ::%d \n", isempty(sp)); // checking stack is empty or full after pop()
    printf("Stack After push ::%d \n", isfull(sp));  // checking stack is empty or full after  pop()

    for (int j = 1; j <= sp->top + 1; j++) // loop to check the position of each index
    {
        printf("The value at position  %d is %d  \n", j, peek(sp, j));

    }
    printf("Top of stack is ::%d\n",stacktop(sp));
    printf("Bottom  of stack is ::%d\n",stackbottom(sp));
    printf("\n Stack operations Successful");

    return 0;
}