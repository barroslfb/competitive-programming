#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        string a, b;
        cin >> a >> b;
        char tmp = a[0];
        a[0] = b[0];
        b[0] = tmp;
        cout << a << " " << b << endl;
    }

    return 0;
}