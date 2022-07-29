#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void print_LL(struct node *n)
{
    while(n!=NULL)
    {
        printf("\nThe data is %d",n->data);
        n=n->next;
    }

}
int main()
{
    struct node *head=NULL;
    struct node *first=NULL;
    struct node *second=NULL;
    struct node *third=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head->data=66;
    head->next=first;
    first->data=90;
    first->next=second;
    second->data=78;
    second->next=third;
    third->data=89;
    third->next=NULL;
    print_LL(head);

}
