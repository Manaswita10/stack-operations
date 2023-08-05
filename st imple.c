#include<stdio.h>

int MAX=5;
int top=-1;
int stack[5];

void push(int data)
{
    if(top==MAX-1)
    {
        printf("\n Stack is full");
        return;
    }
    stack[++top]=data;

}

void pop()
{
    if(top==-1)
    {
        printf("\n Stack is Empty");
        return;
    }
    printf("\n Deleted item is %d",stack[top]);
    top--;
}


void display()
{
    int i;
    if(top==-1)
    {
        printf("\n Stack is Empty");
        return;
    }

    for(i=top;i>=0;i--)
        printf("%d\n",stack[i]);

}

int main()
{
    int ch,num;

    do
    {
        printf("\n1.PUSH 2.POP  3.Display  4.Exit : ");
        scanf("%d",&ch);

        switch(ch)
        {
       case 1:
                printf("\n Enter a Number : ");
                scanf("%d",&num);
                push(num);
                break;
       case 2:
                pop();
                break;

       case 3:
                display();
                break;
       case 4:
                printf("\nProg. Complete ....");
                break;

       default :
                printf("\n Wrong Input");

        }

    }while(ch!=4);

    return 0;
}
