int addHelper(Node *temp) {
    if (temp == NULL) return 1; // Return 1 for carry when we reach the end of the list.
    int carry = addHelper(temp->next); // Recursively traverse the list.
    if (carry == 0) return 0; // If there's no carry from the next node, no need to propagate it.
    if (temp->data < 9) { // If the current node's data is less than 9, just increment and return 0.
        temp->data += 1;
        return 0;
    } else { // If the current node's data is 9, set it to 0 and propagate carry.
        temp->data = 0;
        return 1;
    }
}

Node *addOne(Node *head) {
    int carry = addHelper(head);
    if (carry == 1) { // If there's a carry after traversing the list, we need to add a new node.
        Node* newnode = new Node(1);
        newnode->next = head;
        head = newnode;
    }
    return head;
}
