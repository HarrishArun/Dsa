vector<pair<int, int>> findPairs(Node* head, int k) {
    vector<pair<int, int>> ans;
    Node* left = head;
    Node* right = head;

    // Move the right pointer to the last node
    while (right->next) 
        right = right->next;

    // Start exploring pairs until left and right pointers meet or cross
    while ( left->data < right->data) {
        int sum = left->data + right->data;
        if (sum == k) {
            ans.push_back({left->data, right->data});
            left = left->next;
            right = right->prev;
        } else if (sum < k) {
            left = left->next;
        } else {
            right = right->prev;
        }
    }
    return ans;
}
