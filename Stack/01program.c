/*
    simple concept for push pop peek on stack
*/

#include<stdio.h>
#define MAX 3
int stack[MAX];
int tos=-1;
int isfull()
{
    if(tos==MAX-1)
        return 1;
    else
        return 0;
}
int isempty()
{
    if(tos==-1)
        return 1;
    else
        return 0;
}
void push()
{
    int a;
    if(isfull())
        printf("\nstack overflow\n");
    else
    {
        printf("\nenter the element to be pushed\n");
        scanf("%d",&a);
        tos++;
        stack[tos]==a;
        
    }
}
void pop()
{
    int a;
    if(isempty())
        printf("\nstack underflow\n");
    else
    {
        a==stack[tos];
        tos--;
    }
}
void peek()
{
    if(isempty())
        printf("\nstack underflow\n");
    else
        printf("\nthe peeked element is \n%d\n",stack[tos]);
}
void display()
{
    int i;
    if(isempty())
        printf("\nstack underflow\n");
    else
    {
        for ( i = 0; i < MAX; i++)
        {
            printf("\n%d",stack[i]);
        }
    }
}

int main()
{
    int choice;
    printf("\n1.stack overflow check.\n");
    printf("\n2.stack underflow check.\n");
    printf("\n3.push the element.\n");
    printf("\n4.pop the element.\n");
    printf("\n5.peek the element.\n");
    printf("\n6.display the element.\n");
    while(1)
    {
        printf("\nenter your choice:\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
                isfull();
                break;
        case 2:
                isempty();
                break;
        case 3:
                push();
                break;
        case 4:
                pop();
                break;
        case 5:
                peek();
                break;
        case 6:
                display();
                break;
        default:
                exit(0);
        }
    }
    
    return 0;
}