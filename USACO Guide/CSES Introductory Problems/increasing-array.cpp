// link to the problem: https://cses.fi/problemset/task/1094
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    long long moves=0;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for(int i=1; i<n; i++) {
        while (arr[i] < arr[i-1]) {
            arr[i]++;
            moves++;
        }
    }

    cout << moves;
}