#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
    /*unlike in list we make next of node  
      as a pointer because here it holds
      the address  of next node also they
       are not static or contiguous.*/
};
struct node *head=NULL;

void create();
void insertbeg();
void insertend();
void insertpos();
void delbeg();
void delend();
void delpos();
void display();

int main()
{
    int choice;
    printf("\n------------------- SINGLY LINKED LIST MENU----------------------\n");
    printf("\n1.Entry for newnode\n");
    printf("\n2.Insertion in the beginning\n");
    printf("\n3.Insertion at the end\n");
    printf("\n4.Insertion specifically\n");
    printf("\n5.Deletion in the beginning\n");
    printf("\n6.Deletion specifically\n");
    printf("\n8.Display the result\n");
    printf("\n9.Exit\n");
    printf("\n-----------------------------------------------------------------\n");
    while(1)
    {
        printf("\nEnter your choice:\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            insertbeg();
            break;
        case 3:
            insertend();
            break;
        case 4:
            insertpos();
            break;
        case 5:
            delbeg();
            break;
        case 6:
            delend();
            break;
        case 7:
            delpos();
            break;
        case 8:
            display();
            break;
        
        default:
            printf("\nWrong choice!!!!\n");
            break;
        }
    }
    return 0;
}

void create()
{
    struct node *newnode;
    int data;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("\nThe memory is out of space\n");
        return;
    }
    printf("enter the data for the newnode:\n");
    scanf("%d",&data);
    newnode->info=data;
    newnode->next=NULL;
}

void insertbeg()
{
    struct node *newnode;
    create();
    if (head==NULL)
    {
        printf("\nList is empty\n");
        head=newnode;
    }
    else
    {
        newnode->next= head;
        head=newnode;
    }
}

void insertend()
{
    struct node *ptr,*newnode;
    create();
    if (head==NULL)
    {
        printf("\nList is empty\n");
        head=newnode;
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }
}

/*
    three possibilites for insertion at specific pos
    1.no list
    2.pos==0
    3.position not equal to zero
*/
void insertpos()
{
    struct node *ptr,*newnode;
    create();
    int pos,i;
    printf("\nenter the position:\n");
    scanf("%d",&pos);
    if(head==NULL)
    {
        printf("the list is empty\n");
        exit(0);

    }
    else
    {
        ptr=head;
        if(pos==0)
        {
            newnode->next=head;
            head=newnode;
        }
        else 
        {
            for ( i = 0; i < pos-1; i++)
        /*
        eg if pos is 5 then we should run loop upto 4th 
        pos only coz it holds the address of 5th one.
        */
        {
            ptr=ptr->next;
            if(ptr==NULL)
            {
                printf("\nposition not found\n");
            }
        }
        newnode->next=ptr->next;
        ptr->next=newnode;
        }
    }
}

void delbeg()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("\nthe list is empty\n");
        return;
    }
    else
    {
        ptr=head;
        head=ptr->next;
        free(ptr);
    }
}

/*
for deletion at the end three possibilities
1)no list
2)only one node
3)long list
*/
void delend()
{
    struct node  *temp,*ptr;
    if(head==NULL)
    {
        printf("\nlist is empty\n");
        exit(0);
    }
    else if(head->next==NULL)
    {
        ptr=head;
        head=NULL;
        printf("\nthe deleted element is:\n%d",ptr->info);
        free(ptr);
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=NULL;
        printf("\nthe deleted element is:\n%d\t",ptr->info);
        free(ptr);        
    }
}

/*
for deletion at specified position then two possibilities
1)no list
2)does have list
    a)for pos=0
    b)for loop(i<pos)
*/
void delpos()
{
    struct node *temp,*ptr;
    int pos,i;
    if (head==NULL)
    {
        printf("\nthe list is empty\n");
        exit(0);
    }
    else
    {
        printf("Enter the position for the deletion:\n");
        scanf("%d",&pos);
        if(pos==0)
        {
            ptr=head;
            head=ptr->next;
            printf("\nthe deleted element is:\n%d\t",ptr->info);
            free(ptr);
        }
        else
        {
        ptr=head;
        for (i = 0; i < pos; i++)
        {
            temp=ptr;//why temp?
            ptr=ptr->next;
            if(ptr==NULL)
            {
                printf("\nposition not found!!!!\n");
                return;
            }
        }
        temp->next=ptr->next;
        printf("\nthe deleted element is:\n%d\t",ptr->info);
        free(ptr);
        }
    }
}
void display()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("\nlist is empty\n");
        return;
    }
    else
    {
        ptr=head;
        printf("\nThe list is elements are:\n");
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->info);
            ptr=ptr->next;
        }
    }
}

