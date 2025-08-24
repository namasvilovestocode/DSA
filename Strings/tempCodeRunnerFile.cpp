#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "Hello";
    string t = " World";
    string c = s+t;
    cout << c << endl;
    cout << "Length of string: " << c.length() << endl;
    cout << "First letter: " << c[0];
    return 0;
}