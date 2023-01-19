#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlist(struct Node*ptr){

    while(ptr!=NULL){
        printf("elemnts: %d\n", ptr->data);
        ptr = ptr->next;
    }

}


int main()
{
    struct Node*Head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;

    Head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    Head->data = 7;
    Head->next = second;

    second->data = 89;
    second->next = third;

    third->data = 93;
    third->next = fourth;

    fourth->data = 90100010;
    fourth->next = NULL;


    linkedlist(Head);







    return 0;
}