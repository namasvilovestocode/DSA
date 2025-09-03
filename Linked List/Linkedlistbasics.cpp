
// Creation of a Linked List using an array


#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = nullptr;
    }
};

Node* createLL(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1 ; i<arr.size() ; i++) {
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    Node* head = createLL(arr);
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}

// Length of Linked List

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int data1) {
        val = data1;
        next = nullptr;
    }
};

