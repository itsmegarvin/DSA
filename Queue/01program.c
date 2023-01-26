#include<stdio.h>
#define MAX 3
int queue_arr[MAX];
int rear=-1; 
int front=0;
/*
initializing rear pointer to -1 indicates that 
the queue is currently empty and no elements 
have been added to it yet,if we need to add
to it then we first increase the rear that 
means the rear will be at 0th position and
then we enqueue the data.And initializing 
front to 0 means we first need to dequeue the 
element in 0th position and then we increase 
the front.
*/

void insert();
void delete();
void display();

int main()
{
    int choice;
    printf("\n----------------QUEUE MENU----------------\n");
    printf("\nInsert the data\n");
    printf("\nDelete the data\n");
    printf("\nShow the data\n");
    printf("\nQuit\n");
    printf("\n------------------------------------------\n");
    while(1)
    {
        printf("\nEnter your choice:\t");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            default:
                exit(0);
        }
        
    }
    return 0;
}

void insert()
{
    int data;
    if(rear==MAX-1)
        printf("\nQueue overflow\n");
    else
    {
        printf("\nEnter the element to insert:\n");
        scanf("%d",&data);
        rear=rear+1;
        queue_arr[rear]=data;
    }
}

void delete()
{
    if(front>rear)
        printf("\nstack underflow\n");
    else
    {
    printf("\nThe element to be deleted is:\n%d",queue_arr[front]);
    front=front+1;
    }

}

void display()
{
    int i;
    printf("\nThe element in queue is:\n");
    for ( i = 0; i <= MAX-1; i++)
    {
        printf("%d\n",queue_arr[i]);
    }
        
}

