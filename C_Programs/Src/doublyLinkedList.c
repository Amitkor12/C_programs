#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

int main()
{
    struct node *head;
    struct node *two;
    struct node *three;
    head = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    head -> data = 5;
    head -> next = two ;
    head -> prev = NULL;

    two->data = 90;
    two -> prev = head;
    two -> next = three;

    printf("%d\n",head->data);
    printf("%d",two->data);
    return 0;
}