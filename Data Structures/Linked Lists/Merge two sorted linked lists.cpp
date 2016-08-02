/*
    Merge two sorted lists A and B as one linked list
    Node is defined as
    struct Node {
        int data;
        struct Node* next;
    }
*/

Node* MergeLists(Node* headA, Node* headB) {
    // This is a "method-only" submission.
    // You only need to complete this method
    if (headA == nullptr && headB == nullptr) {
        return nullptr;
    } else if (headB == nullptr) {
        return headA;
    } else if (headA == nullptr) {
        return headB;
    } else {
        Node* newSorted;
        if (headA->data < headB->data) {
            newSorted = headA;
            headA = headA->next;
        } else {
            newSorted = headB;
            headB = headB->next;
        }

        Node* save = newSorted;
        while (headA != nullptr && headB != nullptr) {
            if (headA->data < headB->data) {
                newSorted->next = headA;
                headA = headA->next;
            } else {
                newSorted->next = headB;
                headB = headB->next;
            }

            newSorted = newSorted->next;
        }

        while (headA != nullptr) {
            newSorted->next = headA;
            newSorted = newSorted->next;
            headA = headA->next;
        }

        while (headB != nullptr) {
            newSorted->next = headB;
            newSorted = newSorted->next;
            headB = headB->next;
        }

        return save;
    }
}
