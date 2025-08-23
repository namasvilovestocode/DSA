#include<bits/stdc++.h>
using namespace std;

void freq(int arr[],int n,int t) {
    int cnt = 0;
    for (int i = 0; i < n ; i++)
    {
        if (arr[i] == t) {
            cnt = cnt + 1;

        }
    }
    cout << "The count of " << t << " is: " << cnt;
}


int main() {
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    int arr[size];

    for (int i=0 ; i<size ; i++) {
        cin >> arr[i];
    }

    int num;
    cout << "Enter number whose frequency has to be checked: ";
    cin >> num;

    freq(arr,size,num);
}

// Counting frequency of array elements using hash array

#include<bits/stdc++.h>
using namespace std;

int main() {
    int s;
    cout << "Enter size of array: ";
    cin >> s;

    int arr1[s];
    cout << "Input array: ";
    for (int i=0 ; i<s ; i++) {
        cin >> arr1[i];
    }

    int hasharr[13] = {0};
    for (int i=0 ; i<s ; i++) {
        hasharr[arr1[i]] += 1;
    }

    int q;
    int t;
    cout << "Enter no of queries: ";
    cin >> q;
    while(q--) {
        cout << "\nEnter query: ";
        cin >> t;

        cout << "Count of " << t << " is: " << hasharr[t];

    }
}