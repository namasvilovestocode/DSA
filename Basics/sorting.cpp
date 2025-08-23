// Selection Sort
// How to remember? - Select Minimum and Sort , Simple!

#include<bits/stdc++.h>
using namespace std;

void sel_sort(int arr[],int n) {

    // Swap wala index lene ke liye loop
    for (int i=0 ; i <= n-2 ; i++) {

        int mini = i;      //Jo sabse pehla element hai line mai use minimum maan liya

        for (int j=i ; j <= n-1 ; j++) {

            if (arr[j] < arr[mini]) { 

                mini = j;   //Agar koi smaller element hai than mini , toh mini uska index lelega yaani ki voh num min hojayega
            }
        }

        // Code for swapping
        int temp;
        temp = arr[mini];    //Temp ko minimum value dedi
        arr[mini] = arr[i];  // Jaha mini mila tha use line ke first index ki value dedi
        arr[i] = temp;       // Jo pehla index tha use minimum value dedi line ki through temp

        // Aise hi loop mai chalte chalte puri array sort hojayegi!
    }
}

int main() {

    // Taking input for size of array
    int n;
    cout << "Enter size of array: " ;
    cin >> n;

    // Taking input array
    int arr[n];
    cout << "Input array: ";
    for (int i=0 ; i<n ; i++) {
        cin >> arr[i];
    }

    sel_sort(arr,n);

    // Array after sorting

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Bubble sort

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n) {
    for (int i = n-1 ; i >=1 ; i--)
    {
        for (int j = 0; j <= i-1; j++)
        {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubble_sort(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// Insertion Sort
// Takes an element and places it in correct order

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n) {
    for (int i=0 ; i<= n-1 ; i++) {
        int j=i;
        while (j>0 && arr[j-1]>arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
        }
        
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Input array:\n";
    for (int i=0 ; i<n ; i++) {
        cin >> arr [i];
    }

    insertion_sort(arr,n);

    cout << "Array after sorting:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}