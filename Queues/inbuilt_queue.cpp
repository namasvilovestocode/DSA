#include<bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "First element: " << q.front() << endl;
    cout << "Last element: " << q.back() << endl;
    q.pop();

    cout << "First element after deletion: " << q.front() << endl;

    cout << "Size of Queue: " << q.size() << endl;

    return 0;
}