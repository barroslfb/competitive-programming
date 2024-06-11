// link to the problem: https://cses.fi/problemset/task/1070
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    if (n < 4 && n > 1) {
        cout << "NO SOLUTION";
    }
    else if(n == 4) {
        cout << "2 4 1 3";
    }
    else {
        for(int i = n; i >= 1; i-=2) {
            cout << i << " ";
        }
        for(int i = n-1; i >= 1; i-=2) {
            if(i == n-1) {
                cout << i;
            }
            else {
                cout << " " << i;
            }
        }
    }
    cout << endl;

    return 0;
}