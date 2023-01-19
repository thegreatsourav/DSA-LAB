#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlisttraversal(struct Node *ptr)
{

    while (ptr != NULL)
    {
        printf("elemnts: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertatfirst(struct Node *Head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->data = data;
    ptr->next = Head;
    return ptr;
}

struct Node *insertatindex(struct Node *Head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    struct Node *p = Head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return Head;
}

struct Node *insertatend(struct Node *Head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = Head;

    while (p->next != NULL)
    {
        p = p->next;
    }

    ptr->next = NULL;
    p->next = ptr;
    return Head;
}

int main()
{
    struct Node *Head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    Head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    Head->data = 7;
    Head->next = second;

    second->data = 89;
    second->next = third;

    third->data = 93;
    third->next = fourth;

    fourth->data = 9;
    fourth->next = NULL;

    printf("Linkedlist bfr insertion\n");

    linkedlist(Head);
    Head = insertatfirst(Head, 890);

    // Head = insertatindex(Head, 899, 1);

    // Head = insertatend(Head, 900);

    printf("Linkedlist afr insertion\n");

    linkedlist(Head);

    return 0;
}