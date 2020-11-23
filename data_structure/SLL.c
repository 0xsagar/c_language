#include <stdio.h>
#include <stdlib.h>

// Creating a node

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insert(int data)
{
    struct node *link = (struct node *)malloc(sizeof(struct node));
    link->data = data;
    link->next = head;
    head = link;
}

void printList()
{
    struct node *ptr = head;
    printf("\n[head] =>");
    while (ptr != NULL)
    {
        printf(" %d =>", ptr->data);
        ptr = ptr->next;
    }
    printf(" [null]\n");
}
int main()
{
    insert(30);
    insert(50);
    insert(320);
    insert(90);

    printList();
}