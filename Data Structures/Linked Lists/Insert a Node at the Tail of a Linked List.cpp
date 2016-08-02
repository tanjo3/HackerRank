/*
    Insert Node at the end of a linked list
    head pointer input could be NULL as well for empty list
    Node is defined as
    struct Node {
        int data;
        struct Node* next;
    }
*/

Node* Insert(Node* head, int data) {
    // Complete this method
    Node* ele = new Node();
    ele->data = data;
    ele->next = nullptr;

    if (head == nullptr) {
        return ele;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = ele;
    return head;
}
