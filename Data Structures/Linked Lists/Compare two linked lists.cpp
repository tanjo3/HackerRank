/*
    Compare two linked lists A and B
    Return 1 if they are identical and 0 if they are not.
    Node is defined as
    struct Node {
        int data;
        struct Node* next;
    }
*/

int CompareLists(Node* headA, Node* headB) {
    // This is a "method-only" submission.
    // You only need to complete this method
    Node* tempA = headA, *tempB = headB;
    while (tempA != nullptr && tempB != nullptr) {
        if (tempA->data != tempB->data) {
            return 0;
        }

        tempA = tempA->next;
        tempB = tempB->next;
    }

    if (tempA != nullptr || tempB != nullptr) {
        return 0;
    } else {
        return 1;
    }
}
