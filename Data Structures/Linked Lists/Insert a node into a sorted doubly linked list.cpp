/*
    Insert Node in a doubly sorted linked list
    After each insertion, the list should be sorted
    Node is defined as
    struct Node {
        int data;
        Node* next;
        Node* prev;
    }
*/

Node* SortedInsert(Node* head, int data) {
    // Complete this function
    // Do not write the main method.
    Node* elem = new Node();
    elem->data = data;
    elem->prev = elem->next = nullptr;

    if (head != nullptr) {
        Node* temp = head;
        while (temp != nullptr && temp->data < data) {
            elem->prev = temp;
            temp = temp->next;
        }

        elem->next = temp;

        if (elem->prev != nullptr) {
            elem->prev->next = elem;
        }
        if (elem->next != nullptr) {
            elem->next->prev = elem;
        }

        if (temp == head) {
            head = elem;
        }
    } else {
        head = elem;
    }

    return head;
}
