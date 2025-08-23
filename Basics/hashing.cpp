// Counting frequencies of array elements - numbers

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    for (int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    int hasharr[13] = {0};
    int i;
    for ( i = 0; i<n ; i++)
    {
       hasharr[arr[i]] += 1;
    }

    int q;
    cout << "Enter no of queries: ";
    cin >> q;

    while (q--)
    {
        int num;
        cout << "Enter number: ";
        cin >> num;

        cout << "count of " << num << " :" << hasharr[num];
    }
    

}
