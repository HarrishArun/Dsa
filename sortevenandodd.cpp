Node* segregateEvenOdd(Node* head) {
    if (head == nullptr) // handle the case when the original list is empty
        return nullptr;

    vector<int> even;
    vector<int> odd;
    Node* temp = head;

    while (temp) {
        if (temp->data % 2 == 0) {
            even.push_back(temp->data);
        } else {
            odd.push_back(temp->data);
        }
        temp = temp->next;
    }

    
    even.insert(even.end(), odd.begin(), odd.end());

    Node* sorted = new Node(even[0]);
    Node* mover = sorted;

    for (int i = 1; i < even.size(); i++) {
        Node* newNode = new Node(even[i]);
        mover->next = newNode;
        mover = mover->next;
    }

    return sorted;
}
