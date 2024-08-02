#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is :%d \n", ptr->data);
        ptr = ptr->next;
    }
}

// for insertion at begining
struct node *insertion(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    ptr->next = head;
    ptr->data = data;

    return ptr;
}

// insertion at in between
struct node *insertionatindex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    struct node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;

    ptr->next = p->next;
    p->next = ptr;
}

// insertion at the end

struct node *insertionatend(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    ptr->data = data;
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;
}

// insertion after a given node

struct node *insertionafter(struct node *head, struct node *prenode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    ptr->data = data;

    ptr->next = prenode->next;
    prenode->next = ptr;
    

    return head;
}

int main()
{

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // Allocate the pointers

    head = (struct node *)malloc(sizeof(struct node *));
    second = (struct node *)malloc(sizeof(struct node *));
    third = (struct node *)malloc(sizeof(struct node *));
    fourth = (struct node *)malloc(sizeof(struct node *));

    // link the nodes

    head->data = 5;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 22;
    third->next = fourth;

    fourth->data = 31;
    fourth->next = NULL;

    linkedlisttraversal(head);

    //  head = insertion(head, 3);

    //  printf("After insertion of linkedlist : \n ");
    // linkedlisttraversal(head);
    printf("\nAfter :\n");

    // for at index
    // head = insertionatindex(head, 7, 1);
 
    // for at the end
    //  head=insertionatend(head,41);

    // for the after the given node

    head = insertionafter(head, third, 27);
    linkedlisttraversal(head);

    return 0;
}