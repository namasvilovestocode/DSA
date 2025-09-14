#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode* prev;
};

class Solution {
    public:

    ListNode* head;

    void del_beg() {
        ListNode* temp = head;

        if(head == NULL) {
            cout << "No element in list";
            return;
        }
        else {
            ListNode* temp = head;
            temp->next->prev = NULL;
        }
    }
};

// Write a menu driven program to perform the following operations on a singly linked list:
// Insertion (Beg, End, After an el)
// Deletion (Beg, End, Particular el)
// Searching
// Printing
