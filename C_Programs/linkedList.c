//linked list program
//singly linked list
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;   
};

int main()
{
    struct node *head,*next;
    head = malloc(sizeof(struct node));
    head->data = 56;
    head->link = NULL;
    printf("value of first node data:%d\n",head->data);
    
    next = malloc(sizeof(struct node));
    next->data = 90;
    head->link = next;
    printf("value of second node data:%d\n",next->data);
    return 0;
}

// //doubly linked list
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     struct node *prev;
//     int data;
//     struct node *next;
// };

// void main()
// {
//     struct node *head,*one,*two;
//     one = malloc(sizeof(struct node));
//     two = malloc(sizeof(struct node));
    
//     one -> data = 10;
//     two -> data = 20;
    
//     one->prev = NULL;
//     one -> next = two;
    
//     two->prev = one;
//     two -> next = NULL;
    
//     head = one ;
    
//     printf("value of node one :%d\n",one->data);
//     printf("value of node one :%d",two->data);
    
    
// }