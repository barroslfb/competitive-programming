#include <iostream>
using namespace std;

int main(void) {
    int n;
    int x = 0;
    string state;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> state;
        if (state[1] == '+') {
            x++;
        }
        else {
            x--;
        }
    }

    cout << x;
    return 0;
}