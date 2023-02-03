#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void delete(struct Node** head, int delVal)
{
    struct Node* temp = *head;
    struct Node* previous;
    if(temp->next==NULL)
    {
        *head = NULL;
        free(temp);
        printf("Value %d, deleted \n",delVal);
        return;
    }
    if(temp!=NULL && temp->data==delVal)
    {
        *head = temp->next; 
         
        printf("Value %d, deleted \n",delVal);
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != delVal) 
    { 
        previous = temp; 
        temp = temp->next; 
    }
    if(temp==NULL)
    {
        printf("Value not found\n");
        return;
    }
    previous->next = temp->next;
    free(temp);
    printf("Value %d, deleted \n",delVal);
}

void display(struct Node* node){
    while(node!=NULL)
    {
        printf("%d ",node->data);
        node = node->next;
    }
    printf("\n");
}

int main()
{
    struct Node* head = NULL; 
    struct Node* node2 = NULL; 
    struct Node* node3 = NULL; 
    struct Node* node4 = NULL;
    struct Node* node5 = NULL;
    struct Node* node6 = NULL; 
    head =  (struct Node*)malloc(sizeof(struct Node)); 
    node2 = (struct Node*)malloc(sizeof(struct Node)); 
    node3 = (struct Node*)malloc(sizeof(struct Node)); 
    node4 = (struct Node*)malloc(sizeof(struct Node)); 
    node5 = (struct Node*)malloc(sizeof(struct Node));
    node6 = (struct Node*)malloc(sizeof(struct Node));

   
    head->data  = 22; 
    head->next  = node2; 

    node2->data = 30; 
    node2->next = node3; 

    node3->data = 24;
    node3->next = node4; 

    node4->data = 20;
    node4->next = node5; 
   
    node5->data = 16;
    node5->next = node6;

    node6->data = 12;
    node6->next = NULL;
    printf("Linked List Before Operations : "); 
    display(head);
    delete(&head,22);
    delete(&head,20);
    delete(&head,12);
  
    printf("Linked List After Operations : ");

    display(head); 

    return 0; 
}
