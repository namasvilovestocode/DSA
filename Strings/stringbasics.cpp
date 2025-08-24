#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "Hello";
    string t = " World";
    string c = s+t;
    cout << c << endl;
    cout << c.at(7); 
    cout << "Length of string: " << c.length() << endl;
    cout << "First letter: " << c[0];
    return 0;
}

// String Basics like Length, Indexing etc have been covered