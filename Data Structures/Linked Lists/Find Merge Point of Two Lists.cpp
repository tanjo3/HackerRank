/*
    Find merge point of two linked lists
    Node is defined as
    struct Node {
        int data;
        Node* next;
    }
*/

int FindMergeNode(Node* headA, Node* headB) {
    // Complete this function
    // Do not write the main method.
    Node* tempA = headA, *tempB = headB;
    int lengthA = 0, lengthB = 0;
    while (tempA != nullptr) {
        lengthA++;
        tempA = tempA->next;
    }
    while (tempB != nullptr) {
        lengthB++;
        tempB = tempB->next;
    }

    tempA = headA, tempB = headB;
    int diff = std::abs(lengthA - lengthB);

    if (lengthA > lengthB) {
        for (int i = 0; i < diff; i++) {
            tempA = tempA->next;
        }
    } else {
        for (int i = 0; i < diff; i++) {
            tempB = tempB->next;
        }
    }

    while (tempA != tempB) {
        tempA = tempA->next;
        tempB = tempB->next;
    }

    return tempA->data;
}
