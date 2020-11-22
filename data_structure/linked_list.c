#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

//creating new node
struct node *head = NULL;
void new_node(int val)
{
    struct node *link = (struct node *)malloc(sizeof(struct node));
    link->data = val;
    link->next = head;
    head = link;
}

//print list
void print_list()
{
    struct node *link = head;
    printf("\n[head]=> \n");
    while (link != NULL)
    {
        printf("%d => ", link->data);
        link = link->next;
    }
    printf("\n");
    while (link != NULL)
    {
        printf("positions %d => ", link->next);
        link = link->next;
    }
}

int main()
{
    int a;
    printf("How many elements you want to add?\n");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        int b;
        printf("Enter the elements\n");
        scanf("%d", &b);
        new_node(b);
    }

    print_list();
    return 0;
}