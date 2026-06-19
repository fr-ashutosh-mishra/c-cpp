// Reverse a linkedlist


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
    int n;
    struct Node* next;
} Node;

Node* createList(Node* head)
{
    int n;
    scanf("%d",&n);
    
    if(head==NULL)
    {
        head = (Node*)malloc(sizeof(Node*));
        head->n = n;
        head->next = NULL;
    }
    
    Node* tempHead = head;
    
    while(n!=0)
    {
        scanf("%d",&n);
        if(n==0) break;
        Node* node= (Node*)malloc(sizeof(Node*));
        node->n = n;
        node->next = NULL;
        tempHead->next = node;
        tempHead = node;
    }
    return head;
}

Node* reverse(Node* head)
{
    Node* prev=NULL;
    Node* next =NULL;
    Node* temphead = head;
   
    while(temphead!=NULL)
    {
       
       next = temphead->next;
       temphead->next = prev;
       prev = temphead;
       temphead = next;
       
    }
    return prev;
}

Node* insertNode(Node* head, int val, int pos)
{
    if(head)
    {  Node* temp = head;
       for(int i=0;i<pos-1;i++)
       {
        temp = temp->next;
       }
       Node* node= (Node*)malloc(sizeof(Node*));
       node->n = val;
       node->next = temp->next;
       temp->next = node;
    }

    return head;
}

Node* deleteNode(Node* head, int pos)
{
    if(head)
    {
        Node* temp = head;
        for(int i=0;i<pos-1;i++)
        {
            temp = temp->next;
        }
        Node* delNode = temp->next;
        temp->next = temp->next->next;
        free(delNode);
    }
return head;
}

void printList(Node* head)
{
    Node* temp = head;
    
    while(temp!=NULL)
    {
        printf("%d->",temp->n);
        temp = temp->next;
    }
    printf("\n");
}

Node* createLoop(int val, Node* head)
{
    Node* temp = head;
    
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    Node* node = (Node*)malloc(sizeof(Node*));
    node->n = val;
    node->next = head;
    temp->next = node;
    
    return head;
}

bool detectLoop(Node* head)
{
   Node* slow = head;
   Node* fast = head->next;
    while((fast->next->next!=NULL) && slow->next || fast->next->next)
    {
        if((slow->next) == fast->next->next)
        {
            return true;
        }
        else
        {
            slow = slow->next;
            fast = fast->next->next;
        }
    }
    
    return false;
}

int main()
{
    Node* head=NULL;
    head = createList(head);
    printList(head);
    // CreateLoopLL
    head = createLoop(1, head);
    
    bool loop = detectLoop(head);
    if(loop)
    {
        printf("Loop detected");
    }
    else
    {
        printf("Loop free");
    }
    // head = reverse(head);
    // head = insertNode(head, 13, 3);
    // head = deleteNode(head, 3);
    // printList(head);
    return 0;
}
