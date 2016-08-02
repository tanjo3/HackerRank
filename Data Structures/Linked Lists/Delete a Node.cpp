/*
    Delete Node at a given position in a linked list
    Node is defined as
    struct Node {
        int data;
        struct Node* next;
    }
*/

Node* Delete(Node* head, int position) {
    // Complete this method
    if (position == 0) {
        head = head->next;
    } else {
        Node* prev = head;
        Node* curr = head->next;

        for (int i = 1; i < position; i++) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
    }

    return head;
}
