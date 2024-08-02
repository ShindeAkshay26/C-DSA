#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// for traversal

void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is : %d \n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // Allocate memory for the nodes of linkedlist

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // link first to second

    head->data = 7;
    head->next = second;

    // link second to third

    second->data = 50;
    second->next = third;

    // lets terminate the list

    third->data = 66;
    third->next = fourth;

    fourth->data = 21;
    fourth->next = NULL;

    linkedlisttraversal(head);

    return 0;
}