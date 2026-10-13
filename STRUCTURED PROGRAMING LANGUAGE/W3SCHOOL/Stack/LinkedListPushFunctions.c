#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Node
{
    int data;
    struct Node *next;
};


struct Node *top = NULL;
void push(int x)
{    //memory allo. check using printf
    struct Node *newNode = malloc(sizeof(struct Node));
  
    if (newNode == NULL)
    {
        printf("mmemory allocation failed\n\n");
        return;
    }
    newNode->data= x;
    newNode->next=top;
    top=newNode;
}




void pop()
{
    if(top == NULL)
    {
        printf("Stack Underflowed\n");
        return;
    }
    struct Node *temp = top;
  
    printf("Removed:%d\n", temp->data);
    top=top->next;
    free(temp);
}




void peek()
{
    if (top==NULL)
    {   printf("stack is empty\n");
        return;
    }
    printf("top element:%d\n",top->data);
}



//display
void display()
{
    struct Node *current = top;

    if(current ==NULL)
    {
        printf("This stack is empty....\n\n\n");
        return;
    }
    while(current != NULL)
    {
        printf("%d  \n\n ", current->data);
        current = current->next;
    }
}



//clear
/*void clearStack()
{
    while (top != NULL)
    {
        struct Node temp = top;
        top = top->next;
        free(temp);
    }
}*/




int main()
{
    push(10);
    push(20);
    push(30);
    display();
    peek();
    pop();
    display();
    //ClearStack();
    return 0;
}
