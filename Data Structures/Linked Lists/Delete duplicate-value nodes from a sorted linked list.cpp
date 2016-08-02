/*
    Remove all duplicate elements from a sorted linked list
    Node is defined as
    struct Node {
        int data;
        struct Node* next;
    }
*/

Node* RemoveDuplicates(Node* head) {
    // This is a "method-only" submission.
    // You only need to complete this method.
    Node* itr = head, *temp = head;

    int curr;
    if (itr != nullptr) {
        curr = itr->data;
        itr = itr->next;
    }

    while (itr != nullptr) {
        if (curr != itr->data) {
            curr = itr->data;
            temp->next = itr;
            temp = itr;
        }

        itr = itr->next;
    }

    temp->next = nullptr;
    return head;
}
