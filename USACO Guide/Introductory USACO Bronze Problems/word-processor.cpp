// link to the problem: https://usaco.org/index.php?page=viewproblem2&cpid=987

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int n, k;

    cin >> n >> k;
    int counter = k;
    string fra[n];
    for (int i = 0; i < n; i++) {
        cin >> fra[i];
    }

    for (int i = 0; i < n; i++) {
        if (fra[i].size() <= counter) {
            if (counter != k) {
                cout << " " << fra[i];
                counter -= fra[i].size();
            }
            else {
                cout << fra[i];
                counter -= fra[i].size();
            }
        }
        else {
            counter = k;
            cout << endl;
            if (fra[i].size() > counter) {
                cout << endl << fra[i] << endl;
            }
            else {
                cout << fra[i];
                counter -= fra[i].size();
            }
        }
    }

    return 0;
}