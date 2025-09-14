#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << "Top element before deletion: " << st.top() << endl;
    st.pop();

    cout << "Top element after deletion: " << st.top() << endl;
    cout << "Size of the stack: " << st.size() << endl;

    return 0;
}