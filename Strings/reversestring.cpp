#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<string> rev_string(vector<string> &str){
        int start = 0;
        int end = str.size() - 1;
        while (start <= end)
        {
            string temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
        return str;
    }
};

int main() {
    Solution s1;
    vector<string> str = {"h","e","l","l","o"};
    s1.rev_string(str);

    for(int i=0 ; i<str.size() ; i++) {
        cout << str[i];
    }
    return 0;
}
