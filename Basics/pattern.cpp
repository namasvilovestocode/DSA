// ***
// ***
// ***


#include<bits/stdc++.h>
using namespace std;

void patt1(int n) {
    int i;
    int j;
    for ( i=0 ; i<n ;i++)
    {
        for (j=0; j<n ; j++){
            cout << "*";
        }
        cout << endl;
    }   
}

int main() {
    int t;
    cout << "Enter t";
    cin >> t;
    int k;
    for (k=0 ; k<t ; k++)
    {
        int n;
        cin >> n;
        patt1(n);
    }
    return 0;
}

// *
// **
// ***
// ****

#include<bits/stdc++.h>
using namespace std;

void patt2(int n) {
    int i;
    int j;
    for (i=0 ; i<n ; i++) {
        for (j=0 ; j<=i ; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    int k;

    for (k=0 ; k<t ; k++) {
        int n;
        cin >> n;
        patt2(n);
    }
}

// 1
// 12
// 123
// 1234
// 12345

#include<bits/stdc++.h>
using namespace std;

void patt3(int n) {
    int i;
    int j;
    for (i=1 ; i<n+1 ; i++) {
        for (j=1 ; j<=i ; j++) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    int k;

    for (k=0 ; k<t ; k++) {
        int n;
        cin >> n;
        patt3(n);
    }
}

// 1
// 22
// 333
// 4444

#include<bits/stdc++.h>
using namespace std;

void patt4(int n) {
    int i;
    int j;
    for (i=1 ; i<n+1 ; i++) {
        for (j=1 ; j<=i ; j++) {
            cout << i;
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    int k;

    for (k=0 ; k<t ; k++) {
        int n;
        cin >> n;
        patt4(n);
    }
}

// *****
// ****
// ***
// **
// *

#include<bits/stdc++.h>
using namespace std;

void patt5(int n) {
    int i;
    int j;
    for (i=1 ; i<=n ; i++) {
        for (j=1 ; j<=(n-i+1) ; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    int k;

    for (k=0 ; k<t ; k++) {
        int n;
        cin >> n;
        patt5(n);
    }
}

// 12345
// 1234
// 123
// 12
// 1

#include<bits/stdc++.h>
using namespace std;

void patt6(int n) {
    int i;
    int j;
    for (i=1 ; i<=n ; i++) {
        for (j=1 ; j<=(n-i+1) ; j++) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    int k;

    for (k=0 ; k<t ; k++) {
        int n;
        cin >> n;
        patt6(n);
    }
}

//    *
//   ***
//  *****
// *******

#include<bits/stdc++.h>
using namespace std;

void patt7(int n) {
    int i;
    int j;
    for (i=0 ; i<n ; i++) {
        // space
        for (j=0 ; j<(n-i-1) ; j++) {
            cout << " ";
        }
        // star
        for (j=0 ; j<(2*i + 1) ; j++) {
            cout << "*";
        }
        // space
        for (j=0 ; j<(n-i-1) ; j++) {
            cout << " ";
        } 
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    int k;

    for (k=0 ; k<t ; k++) {
        int n;
        cin >> n;
        patt7(n);
    }
}

// *****
//  ***
//   *

#include<bits/stdc++.h>
using namespace std;

void patt8(int n) {
    int i;
    int j;
    for (i=0 ; i<n ; i++) {
        // space
        for (j=0 ; j<i ; j++) {
            cout << " ";
        }
        // star
        for (j=0 ; j<(2*n-2*i-1) ; j++) {
            cout << "*";
        }
        // space
        for (j=0 ; j<i; j++) {
            cout << " ";
        } 
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    int k;

    for (k=0 ; k<t ; k++) {
        int n;
        cin >> n;
        patt8(n);
    }
}

//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *

// TRICK : Combine both pattern 7 and 8

#include<bits/stdc++.h>
using namespace std;

int i;
int j;

void patt7(int n) {
    for (i=0 ; i<n ; i++) {
        // space
        for (j=0 ; j<(n-i-1) ; j++) {
            cout << " ";
        }
        // star
        for (j=0 ; j<(2*i + 1) ; j++) {
            cout << "*";
        }
        // space
        for (j=0 ; j<(n-i-1) ; j++) {
            cout << " ";
        } 
        cout << endl;
    }
}

void patt8(int n) {

    for (i=0 ; i<n ; i++) {
        // space
        for (j=0 ; j<i ; j++) {
            cout << " ";
        }
        // star
        for (j=0 ; j<(2*n-2*i-1) ; j++) {
            cout << "*";
        }
        // space
        for (j=0 ; j<i; j++) {
            cout << " ";
        } 
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    int k;

    for (k=0 ; k<t ; k++) {
        int n;
        cin >> n;
        patt7(n);
        patt8(n);
    }
}

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

#include<bits/stdc++.h>
using namespace std;

void patt10(int n) {
    int i;
    int j;
    for (i=0 ; i< 2*n-1 ; i++) {
        int stars = i;
        if (i>n) stars = 2*n-i;
        for (j=0 ; j< stars ; j++) {
            cout << "*";
        }
        cout << endl;

    }
}
 
int main() {
    int t;
    cin >> t;
    int k;
    for (k=0 ; k<t ; k++) {
        int n;
        cin >> n;
        patt10(n);
    }
}

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include<bits/stdc++.h>
using namespace std;

void patt11(int n) {
    for (int i = 0 ; i < n; i++) {
        int start = 1;
        if (i%2 == 0) {
            start = 1;
        }
        else {
            start = 0;
        }
        for (int j = 0; j <= i ; j++) {
            cout << start;
            start = 1-start;
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    for (int k = 0; k < t; k++) {
        int n;
        cin >> n;
        patt11(n);
    }
}

// 1      1
// 12    21
// 123  321
// 12344321

#include<bits/stdc++.h>
using namespace std;

void patt12(int n) {
    int space = 2*(n-1);
    for (int i=1 ; i <= n ; i++) {
        // number
        for (int j = 1 ; j <= i ; j++) {
            cout << j;
        }

        // space
        for (int j = 1 ; j<= space ; j++) {
            cout << " ";
        }

        // number
        for (int j = i ; j >=1 ; j--) {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

int main() {
    int t;
    cin >>  t;
    for (int k = 0 ; k<t ; k++) {
        int n;
        cin >> n;
        patt12(n);
    }
}

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include<bits/stdc++.h>
using namespace std;

void patt13(int n) {
    int num = 1;
    for (int i=1 ; i <= n; i++) {
        for (int j=1 ; j<= i ; j++) {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >>  t;
    for (int k = 0 ; k<t ; k++) {
        int n;
        cin >> n;
        patt13(n);
    }
}

// A
// AB
// ABC
// ABCD
// ABCDE

#include<bits/stdc++.h>
using namespace std;

void patt14(int n) {
    for (int i=0 ; i < n ; i++) {
        for (char ch = 'A'; ch <= 'A' + i ; ch++) {
            cout << ch;
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >>  t;
    for (int k = 0 ; k<t ; k++) {
        int n;
        cin >> n;
        patt14(n);
    }
}


