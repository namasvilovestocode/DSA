#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* ptr;
};

class SinglyLL {
    public:

    Node* head = NULL; //Setting head to null for empty LL

    void ins_beg(int el) {
        Node* nnode = new Node;
        nnode -> val = el;       //Creation of nnode that stores the element
        nnode -> ptr = head;     // nnode now points to head to create link
        head = nnode;            // head takes the position of nnode ie the first element
    }

    void ins_end(int el) {
        Node* nnode = new Node;
        nnode -> val = el;
        nnode -> ptr = NULL;

        if(head == NULL){
            head = nnode;
        }

        Node* last = head;
        while(last -> ptr != NULL) {
            last = last -> ptr;
        }
        last -> ptr = nnode;
    }

    void ins_after_el(int num, int el) {     // num is the element that should be inserted and el is after which
        Node* nnode = new Node;              // num should be inserted
        nnode -> val = num;
        nnode -> ptr = NULL;

        if(head == NULL) {                  // For empty LL ofc the element does not exist;
            delete nnode;
            return;
        }

        Node* temp = head;
        while(temp != NULL) {
            if(temp -> val == el) {         //Creation of new insertion node that can link as soon as el is found
                nnode -> ptr = temp -> ptr;
                temp -> ptr = nnode;
                return;
            }
            temp = temp -> ptr;            // If condition is not valid then move temp forward
        }

        delete nnode;
        
    }

    void ins_pos(int num, int i) {
        int cnt = 0;
        Node* temp = head;

        if(head == NULL) {
            cout << "Error: List is empty.";
        }

        while(temp != NULL) {
            cnt++;
            if(cnt == i) {
                Node* nnode = new Node;        //Whenever the position is found and equals count we insert the node in b/w
                nnode -> val = num;
                nnode -> ptr = temp -> ptr;
                temp -> ptr = nnode;

                return;
            }
            temp = temp->ptr;
        }
    }

    void printEl() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->val << " ";  // Printing all the elements of the LL
            temp = temp -> ptr;
        }
    }
};

int main() {
    SinglyLL obj1;

    obj1.ins_beg(10);
    obj1.ins_beg(20);
    obj1.ins_beg(30);

    obj1.ins_end(40);
    obj1.ins_end(50);

    obj1.ins_after_el(45,30);

    obj1.ins_pos(15,4);

    obj1.printEl();

    return 0;
}