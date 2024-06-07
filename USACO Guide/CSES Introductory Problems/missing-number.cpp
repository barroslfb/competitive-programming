// link to the problem: https://cses.fi/problemset/task/1083
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int ns[n];
    for(int i = 0; i < n; i++) {
        ns[i] = -1;
    }

    for(int i = 0; i < n - 1; i++) {
        int h;
        cin >> h;
        ns[h-1] = h;
    }

    for(int i=0; i<n; i++) {
        if (ns[i] == -1) {
            cout << i+1;
            break;
        }
    }
    return 0;
}