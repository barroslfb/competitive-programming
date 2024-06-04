#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int m, n;
    cin >> m >> n;

    if (m % 2 == 0 || n % 2 == 0) {
        cout << m*n/2;
    }
    else {
        if (m == 1 && n == 1) {
            cout << 0;
        }
        else if (m == 1) {
            cout << n / 2;
        }
        else if (n == 1) {
            cout << m / 2;
        }
        else {
            cout << (m*(n-1)/2) + (m/2);
        }
    }
    return 0;
}