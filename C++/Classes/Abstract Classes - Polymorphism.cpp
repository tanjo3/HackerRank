class LRUCache : public Cache {
public:
    LRUCache(int capacity) {
        cp = capacity;
        head = tail = NULL;
    }

    int get(int key) {
        auto it = mp.find(key);

        if (it == mp.end()) {
            return -1;
        } else {
            Node* temp = it->second;

            if (mp.size() > 1 && temp != head) {
                if (temp == tail) {
                    tail = temp->prev;
                    tail->next = NULL;
                } else {
                    temp->next->prev = temp->prev;
                    temp->prev->next = temp->next;
                }

                temp->prev = NULL;
                temp->next = head;
                head->prev = temp;
                head = temp;
            }

            return head->value;
        }
    }

    void set(int key, int value) {
        if (get(key) == -1) {
            Node* newNode = new Node(key, value);

            if (head == NULL) {
                head = tail = newNode;
            } else {
                if (cp == 1) {
                    mp.erase(tail->key);

                    head = tail = newNode;
                } else if (cp == (int) mp.size()) {
                    mp.erase(tail->key);

                    tail = tail->prev;
                    delete tail->next;
                    tail->next = NULL;

                    head->prev = newNode;
                    newNode->next = head;
                    head = newNode;
                } else {
                    head->prev = newNode;
                    newNode->next = head;
                    head = newNode;
                }
            }

            mp[key] = newNode;
        } else {
            mp.find(key)->second->value = value;
        }
    }
};
