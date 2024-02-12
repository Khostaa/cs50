#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *first;

// node creation
node *createNode(int element)
{
    node *NewNode;
    NewNode = (node*)malloc(sizeof(node));
    if(NewNode==NULL)
    {
        printf("Memory Allocation failed.\n");
        return NewNode;
    }
    else{
        NewNode ->data = element;
        NewNode ->next = NULL;
        return NewNode;
    }
}

// Insertion at END
void insert(int element)
{
    node *NewNode;
    NewNode = createNode(element);
    if(first == NULL)
    {
        first = NewNode;
        printf("Success\n");
    }
    else
    {
        for(node *temp =  first ; temp != NULL ; temp=temp->next)
        {
            if (temp->next == NULL)
            {
                temp->next = NewNode;
                break;
            }
        }
    }
    
}
void display()
{
    node *temp;
    temp = first;
    if(first == NULL)
    {
        printf("list is empty\n");
    }
    else{
            printf("\nCurrent List is : ");
            do
            {
                printf("%d\t",temp->data);
                temp = temp->next;
            } while (temp != NULL);
            printf("\n\n");   
    }
}
int main(){
    int element, choice;
    do
    {
        printf("1.Insert\n2.Display\n3.Exit\n");
        printf("Choice?\n");
        printf(">");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter element to insert: ");
            scanf("%d",&element);
            insert(element);
            break;
        case 2:
            display();
            break;
        case 3:
            printf("Bye Bye!\n");
            break;
        default:
            printf("Enter valid choices only.\n");

            break;
        }
    } while (choice!=3);

    return 0;

}