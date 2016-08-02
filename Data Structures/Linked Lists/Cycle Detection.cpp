/*
    Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

    A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    if (head == nullptr) {
        return false;
    }

    Node* p1 = head;
    Node* p2 = head;

    while (p1->next != nullptr && p2->next != nullptr && p2->next->next != nullptr) {
        p1 = p1->next;
        p2 = p2->next->next;

        if (p1 == p2) {
            return true;
        }
    }

    return false;
}
