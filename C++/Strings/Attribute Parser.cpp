#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef struct {
    string name, value;
} Attribute;

class Tag {
public:
    Tag() {
        name = "";
        parent = NULL;
    }

    string getName() {
        return name;
    }

    void setName(string tagName) {
        name = tagName;
    }

    void addChild(Tag* child) {
        children.push_back(child);
    }

    Tag* getChild(string tagName) {
        for(auto const &child : children) {
            if (tagName.compare(child->getName()) == 0) {
                return child;
            }
        }

        return NULL;
    }

    vector<Tag*>* getChildren() {
        return &children;
    }

    Tag* getParent() {
       return parent;
    }

    void setParent(Tag* parentTag) {
       parent = parentTag;
    }

    void addAttribute(string attrName, string attrValue) {
        Attribute newAttr;
        newAttr.name = attrName;
        newAttr.value = attrValue;

        attrs.push_back(newAttr);
    }

    string getValue(string attrName) {
        for(auto const &attr : attrs) {
            if (attrName.compare(attr.name) == 0) {
                return attr.value;
            }
        }

        return "Not Found!";
    }
private:
    string name;
    vector<Attribute> attrs;
    vector<Tag*> children;
    Tag* parent;
};

void deleteTag(Tag* tag) {
    vector<Tag*>* clean = tag->getChildren();
    if (clean->size() != 0) {
        for(auto const &child : *clean) {
            deleteTag(child);
        }
        clean->clear();
    } else {
        delete tag;
        tag = NULL;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, Q;
    cin >> N >> Q;

    string line;
    Tag* current = new Tag();

    /* clear input stream */
    getline(cin, line);

    for (int i = 0; i < N; i++) {
        getline(cin, line);

        Tag* temp = new Tag();
        auto it = line.cbegin();
        while (it != line.cend()) {
            bool isClosingTag = false;

            if (*it == '<') {   /* tag name */
                string tagName = "";

                it++;
                while (*it != ' ' && *it != '>') {
                    if (*it == '/') {
                        isClosingTag = true;
                    } else {
                        tagName += *it;
                    }

                    it++;
                }

                if (!isClosingTag) {
                    temp->setName(tagName);
                    temp->setParent(current);
                    current->addChild(temp);
                    current = temp;
                } else {
                    current = current->getParent();
                    delete temp;
                }
            } else {    /* attribute list */
                while (*it != '>') {
                    string attrName = "";
                    string attrValue = "";

                    it++;
                    while (*it != ' ') {
                        attrName += *it;
                        it++;
                    }
                    it += 4;
                    while (*it != '"') {
                        attrValue += *it;
                        it++;
                    }

                    temp->addAttribute(attrName, attrValue);
                    it++;
                }

                it++;

            }
        }
    }

    for (int i = 0; i < Q; i++) {
        getline(cin, line);


        Tag* temp = current;
        string token = "";
        bool error = false, termFlag = false;
        auto it = line.cbegin();

        while (it != line.cend()) {
            if (*it == '.' || *it == '~') {
                temp = temp->getChild(token);

                if (temp == NULL || termFlag) {
                    error = true;
                    break;
                }

                token = "";

                if (*it == '~') {
                    termFlag = true;
                } else {
                    termFlag = false;
                }
            } else {
                token += *it;
            }

            it++;
        }

        if (error || !termFlag || it != line.cend()) {
            cout << "Not Found!" << endl;
        } else {
            cout << temp->getValue(token) << endl;
        }
    }

    deleteTag(current);

    return 0;
}
