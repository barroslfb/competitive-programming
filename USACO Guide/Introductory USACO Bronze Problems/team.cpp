// link to the problem: https://codeforces.com/problemset/problem/231/A

#include <iostream>
using namespace std;

int main() {
    int n, a, b, c;
    int count = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        if (a + b + c >= 2) {
            count += 1;
        }
    }
    cout << count;
}
