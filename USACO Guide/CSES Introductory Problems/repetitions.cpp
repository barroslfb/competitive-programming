// link to the problem: https://cses.fi/problemset/task/1069
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string seq;
    // int a = 0, c = 0, g = 0, t = 0;
    int len = 0, temp = 1;
    cin >> seq;
    int n = seq.size();

    for(int i=0; i<n; i++) {
        if(seq[i] == seq[i+1]) {
            temp++;
        }
        else {
            if (temp > len) {
                len = temp;
            }
            temp = 1;
        }
    }
    cout << len;
    return 0;
}