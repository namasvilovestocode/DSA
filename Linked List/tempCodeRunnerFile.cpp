// Length of Linked List

#include<bits/stdc++.h>
using namespace std;

struct Nodes{
    int val;
    Nodes* next;

    Nodes(int data1) {
        val = data1;
        next = nullptr;
    }
};

Nodes* len(vector<int> &arr) {
    Nodes* head = new Nodes(arr[0]);
    Nodes* mover = head;

    for(int i=1 ; i<arr.size() ; i++) {
        Nodes* temp = new Nodes(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

int getLength(Nodes* head) {
    int cnt = 0;
    Nodes* temp = head;

    while(temp != NULL) {
        cnt++;
        temp = temp -> next;
    }
    return cnt;
}

int main() {
    vector<int> arr = {1,3,4,9,34,78};
    Nodes* head = len(arr);
    int res = getLength(head);

    cout << "Length of the linked list is: " << res;
    return 0;
}