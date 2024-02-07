Node* sortList(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    int count[3] = {0}; 
    Node* temp = head;

   
    while (temp) {
        count[temp->data]++;
        temp = temp->next;
    }

    temp = head; 
    for (int i = 0; i < 3; i++) {
        while (count[i] > 0) {
            temp->data = i;
            count[i]--;
            temp = temp->next;
        }
    }

    return head;
}
