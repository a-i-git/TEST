#include<stdio.h>
int Push(int m,int ls[m],int *top)
{
    int a;
    if(*top>m-1)
    {
        printf("\nOVERFLOW!!!");
        printf("\nPop the element");
    }
    else
        printf("\nEnter the element you want to push ");
        scanf("%d",&a);
        ls[*top]=a;
        *top+=1;
}
void Peek(int m,int ls[m],int *top)
{
    int a,len;
    printf("top is %d",*top-1);
    printf("\nThe *topmost element of the stack is %d ",ls[*top-1]);
}
void Pop(int m,int ls[m],int *top)
{
    int a,len;
    printf("\n top currently is %d",*top);
    printf("\n The element currently sitting at the top(to be popped) is %d",ls[*top-1]);
    *top-=1;
}

void Display(int m,int ls[m],int *top)
{
    printf("\nThe Stack looks this way ");
    for(int i=*top-1;i>=0;i--)
    {
        printf("\n%d",ls[i]);
    }
}
int main()
{
    int n,ch=1,c=0;
    printf("Enter the number of elements in the array ");
    scanf("%d",&n);
    int arr[n];
    printf("\n***Stack OPS***");
    printf("\n 1.Push \n 2.Peek \n 3.Pop \n 4.Display \n 5. End");
    while(ch>0)
    {
        printf("\nEnter your choice ");
        scanf("%d",&ch);
      switch(ch)
     {
      case 1:
         Push(n,arr,&c);
         break;
      case 2:
         Peek(n,arr,&c);
         break;
      case 3:
         Pop(n,arr,&c);
         break;
      case 4:
         Display(n,arr,&c);
         break;
    }
    if(ch==5)
    {
        break;
    }
  }

}
