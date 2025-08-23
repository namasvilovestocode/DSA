// Extraction of digits

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n,last;
    cout << "Enter a number \n";
    cin >> n;

    while (n>0)
    {
        last = n%10;
        cout << last << endl;
        n=n/10;

    }
    
}

// Printing the number of digits that evenly divide a number

class Solution {
    public:
      // Function to count the number of digits in n that evenly divide n
      int evenlyDivides(int n) {
          int cnt = 0;
          int original = n;
          while (n>0) {
              int last = n%10;
              if (last != 0 and original % last == 0) {
                  cnt++;
              }
              n = n/10;
          }
          return cnt;
      }
  };

// Printing the number of digits

int count(int n) {
    int cnt = 0;
    while (n>0)
    {
        int last = n%10;
        cnt = cnt +1;
        n=n/10;
    }
    return cnt;
}


// Reversing a positive integer
#include<bits/stdc++.h>
using namespace std;

int reverse(int n) {
    int rev = 0;
    while (n != 0) {
        int last = n % 10;
        rev = rev * 10 + last;
        n = n / 10;
    }
    return rev;  // Return the full reversed number
}

int main() {
    int reversed = reverse(-2345);
    cout << "Reversed number: " << reversed;
}

// Checking for Palindrome Number

#include<bits/stdc++.h>
using namespace std;

void palindrome(int n){
    int orig = n;
    int rev = 0;
    while(n != 0) {
        int last = n%10;
        rev = rev*10 + last;
        n = n/10;
    }
    if (rev == orig) {
        cout << "Number is a palindrome.";
    }
    else {
        cout << "Number is not palindrome.";
    }
}

int main() {
    palindrome(-234);
}

// Armstrong Number

#include <bits/stdc++.h>
using namespace std;

int checkArm(int n, int cnt) {
    int l = 0;
    int sum = 0;

    while (n > 0) {
        l = n % 10;
        sum = sum + pow(l, cnt);
        n = n / 10;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int originalNum = n;
    int cnt = 0;

    // Counting the number of digits in the number
    int temp = n;
    while (temp > 0) {
        temp = temp / 10;
        cnt++;
    }

    // Check if the sum of the nth power of digits is equal to the number itself
    int sum = checkArm(n, cnt);

    if (sum == originalNum) {
        cout << "The number is an Armstrong number" << endl;
    } else {
        cout << "The number is not an Armstrong number" << endl;
    }

    return 0;
}

// GCD/HCF

#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b) {
    while (a>0 && b>0)
    {
        if (a>b) {
            a = a%b;
        }
        else {
            b = b%a;
        }
    }
    if (a == 0) {
        cout << b;
    }
    else {
        cout << a;
    }   
}

int main() {
    int a,b;
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;
    gcd(a,b);
}

// Print all divisors

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
       if(n%i == 0) {
        cout << i << " ";
       }
    }
    
}

// Check for prime

#include<bits/stdc++.h>
using namespace std;

int main() {
    int cnt = 0;
    int n,i;
    cout << "Enter Number: ";
    cin >> n;
    for ( i = 1; i <= n; i++)
    {
        if(n%i == 0) {
            cnt++;
        }
    }
    if (cnt == 2) {
        cout << "Number is a prime number";
    }
    else {
        cout << "Number is not a prime number";
    }
}