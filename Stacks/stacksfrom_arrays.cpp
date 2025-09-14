#include<bits/stdc++.h>
using namespace std;

// Implementation of stack using arrays

class Stack_array {
    public:

    int top = -1;

    /* Since we are implementing using arrays, there has to be a fixed size and
    it cannot be allocated dynamically. Which is why we are avoiding the use of 
    vector here. */

    int st[10];

    void push(int el) {

        if(top >= 9) {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        st[top] = el;
    }

    void top_el() {
        if(top == -1) {
            cout << "No top element" << endl;
        }
        else {
            cout << st[top] << endl;
        }
    }

    void pop() {
        if(top == -1) {
            cout << "No elements present" << endl;
        }
        else {
            top--;
        }
    }

    void size() {
        cout << "Size: " << top+1 << endl;
    }
};

int main() {
    Stack_array obj;

    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);
    obj.push(50);

    obj.top_el();

    obj.pop();

    obj.top_el();

    obj.size();
}
