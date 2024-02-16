/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node* reverseDLL(Node* head)
{ 

    Node* temp=NULL;
    Node* current=head;
    if(head==NULL||head->next==NULL) return head;
    while(current){
        temp=current->prev;
        current->prev=current->next;
        current->next=temp;
        current=current->prev;
    }  

    return temp->prev;
    // Write your code here   
}

