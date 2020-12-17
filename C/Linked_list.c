#include <stdio.h>
#include <stdlib.h>
struct Node* head=NULL;
struct Node* tail=NULL;
//void Print();
struct Node
{
  int data;
  struct Node *next;
};

struct Node* CreateNode(int x)//function to create new node 
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=NULL;
    return temp;
}

//function decleartion
void insert_before_head(int x);
void printlinkedlist();
void Menu();

//main function
int main()
{
    int choice;
    char print;
    int input;
    Menu();//menu for different operation
    printf("Enter your choice : ");
    scanf("%d",&choice);

    /*imp: we can't declare anything inside conditional statemental ex: int x=0 e.t.c*/
    switch (choice)
    {
    case 1:
        printf("Enter the number to store : ");
        scanf("%d",&input);
        insert_before_head(input);
        printlinkedlist();
        break;
    
    default:
        printf("Please Enter valid operation\n");
        break;
    }
    return 0;   
}

void insert_before_head(int x)//function for insertion before head.
{
    struct Node *temp=CreateNode(x);
    if (head==NULL)
    { 
        //head=tail;
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}
/*
void insert_after_tail(int x)
{
    struct Node *temp=CreateNode(x);
    if (head=NUll && tail==NULL)
    {
        head=tail;
        tail=temp;
    }
    if(head!=NULL && tail=NULL)

}
*/
void Menu()
{
    printf("1. Insert an element before head of linked list.\n");
    printf("2. Insert an element after tail of  linked list.\n");
    printf("3. Traverse linked list.\n");
    printf("4. Delete element from beginning.\n");
    printf("5. Delete element from end.\n");
    printf("6. Exit\n");
}

void printlinkedlist()
{
    struct Node* temp;
    temp=head;
    if (temp==NULL)
    {
        printf("Linked list is Empty\n");
    }
    else
    {
        printf("Linked List Found : ");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}


