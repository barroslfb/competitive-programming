// link of the problem: https://codeforces.com/problemset/problem/4/A

#include <iostream>
using namespace std;

int main() {
    short w;
    cin >> w;
    if (w % 2 == 0 && w > 2) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}