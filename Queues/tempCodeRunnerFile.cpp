#include<bits/stdc++.h>
using namespace std;

class Queue_from_array {
    public:

    int q[5];
    int currsize = 0;
    int start = -1, end = -1;

    void push(int x) {
        if(currsize == 5) {
            cout << "Array is already full.";
        }

        if(currsize == 0) {
            start = 0; end = 0;
            q[start] = x;
            currsize++;
        }
        else {
            end = (end+1)%5;
            q[end] = x;
            currsize++;
        }
    }

    int pop() {
        if(currsize == 0) {
            return -1;
        }
        int el = q[start];

        if(currsize == 1) {
            start = end = -1;
            currsize--;
        }
        else {
            start = (start+1)%5;
            currsize--;
        }
        return el;
    }

    int top() {
        if(currsize == 0) {
            cout << "No top element";
        }

        return q[start];
    }

    int size() {
        return currsize;
    }
    
};

int main() {
    Queue_from_array obj;

    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    obj.push(5);

    cout << "Deleted number: " << obj.pop() << endl;
    cout << "Top element after deletion: " << obj.top() << endl;
    cout << "Size of array: " << obj.size() << endl;

    return 0;
}