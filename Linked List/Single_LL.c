#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    //creation of linked list
    struct node *head = NULL;
    head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;
    
    struct node *current = malloc(sizeof(struct node));
    current -> data = 90;
    current -> link = NULL;
    head->link = current;
    
    current = malloc(sizeof(struct node));
    current -> data = 110;
    current -> link = NULL;
    
    head->link->link = current;
    
    printf("%d\n" , head->data);
    printf("%d\n" , head->link->data);
    printf("%d\n" , current->data);
    
    //Traversing of Linked List
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr -> link;
    }
}