/*
    Reverse a linked list and return pointer to the head
    The input list will have at least one element
    Node is defined as
    struct Node {
        int data;
        struct Node* next;
    }
*/

Node* Reverse(Node* head) {
    // Complete this method
    if (head == nullptr) {
        return head;
    }

    Node* prev = nullptr;
    Node* curr = head;
    Node* nexx = head->next;
    while (nexx != nullptr) {
        curr->next = prev;
        prev = curr;
        curr = nexx;
        nexx = nexx->next;
    }

    curr->next = prev;
    return curr;
}
