#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int* arr;
};
int isfull(struct queue *q)
{
    if(q->r==q->size-1)
    {
        return 1;
    }
    return 0; 
}

int isempty(struct queue *q)
{
    if(q->f==q->r)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q,int value)
{
    if(isfull(q))
    {
        printf("Queue id full");
    }
    else{
        q->r++;
        q->arr[q->r]=value;
    }
}

int  dequeue(struct queue *q)
{
    int a=-1;
    if(isempty(q))
    {
        printf("Queue is empty");
    }
    else{
        q->f++;
        a=q->arr[q->f]; 
    }

    return a;

}

int main()
{
    struct queue q;
    q.size=10;
    q.f=-1;
    q.r=-1;
    q.arr=(int*)malloc(q.size*sizeof(int ));
    
    enqueue(&q,12);
    enqueue(&q,15);
    enqueue(&q,12);
    
    dequeue(&q);
    dequeue(&q);
 
    if(isempty(&q))
    {
        printf("Queue is empty");
    }

    if(isfull(&q))
    {
        printf("Queue is full");
    }
    
    return 0;
}