/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int value;
 *      Node *prev;
 *      Node *next;
 *      Node() : value(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : value(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * insertAtTail(Node *head, int k) {
    // Write your code here
      
    Node* temp=head;
    Node* nnode=new Node();
    nnode->value=k;
    nnode->next=nullptr;  if(head==nullptr) return nnode;
    while(temp->next!=nullptr){

       
         temp=temp->next;
    }
    temp->next=nnode;

     return head;
}
