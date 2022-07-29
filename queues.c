#include<stdio.h>
void Queue(int m,int ls[m],int *front,int *rear)
{
    int ele;
    if(*rear>m-1)
    {
        printf("\nThe queue will Overflow ");
        printf("\nStart Dequeuing");
        printf("\nPress Anything");
    }
    else
        printf("\nEnter the element you want to queue ");
        scanf("%d",&ele);
        ls[*rear]=ele;
        *rear+=1;
        //printf("*rear becomes %d",*rear);
}
void Peek(int m,int ls[m],int *front)
{
    printf("\nThe front-most element of the queue is %d",ls[*front]);
}
void Dequeue(int m,int ls[m],int *front,int *rear)
{
    if(*front==*rear)
    {
        printf("\nQueue is empty,queue some elements ");
    }
    else
       printf("\nThe element that will be dequeued is %d",ls[*front]);
       *front+=1;
}
void Display(int m,int ls[m],int *front,int *rear)
{
    printf("\nThe queue looks this way ");
    for(int i=*front;i<=*rear-1;i++)
    {
        printf("\t %d",ls[i]);
    }
}

int main()
{
    int ch=1,c=0,d=0,n=0;
    printf("\nEnter the size of the queue ");
    scanf("%d",&n);
    printf("\nQueue OPS");
    printf("\n 1. Queue \n 2.Peek \n 3.Dequeue \n 4.Display \n 5. Exit");
    int arr[n];
    while(ch>0)
    {
        printf("\nEnter your choice ");
        scanf("%d",&ch);
        switch(ch)
    {
    case 1:
        Queue(n,arr,&c,&d);
        break;
    case 2:
        Peek(n,arr,&c);
        break;
    case 3:
        Dequeue(n,arr,&c,&d);
        break;
    case 4:
        Display(n,arr,&c,&d);
        break;
    if(ch==5)
    {
        break;
    }
    }
    }


}

