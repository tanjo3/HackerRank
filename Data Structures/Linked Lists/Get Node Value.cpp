/*
    Get Nth element from the end in a linked list of integers
    Number of elements in the list will always be greater than N.
    Node is defined as
    struct Node {
        int data;
        struct Node* next;
    }
*/

int GetNode(Node* head, int positionFromTail) {
    // This is a "method-only" submission.
    // You only need to complete this method.
    Node* p1 = head;
    Node* p2 = head;

    for (int i = 0; i <= positionFromTail; i++) {
        p1 = p1->next;
    }

    while (p1 != nullptr) {
        p1 = p1->next;
        p2 = p2->next;
    }

    return p2->data;
}
