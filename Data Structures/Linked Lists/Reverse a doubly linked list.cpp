/*
    Reverse a doubly linked list, input list may also be empty
    Node is defined as
    struct Node {
        int data;
        Node* next;
        Node* prev;
    }
*/

Node* Reverse(Node* head) {
    // Complete this function
    // Do not write the main method.
    if (head == nullptr) {
        return head;
    }

    Node* temp = head->next;
    head->prev = head->next;
    head->next = nullptr;

    while (temp != nullptr) {
        head = temp;
        temp = head->next;
        head->next = head->prev;
        head->prev = temp;
    }

    return head;
}
