#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, k;
    int passa = 0;
    cin >> n >> k;
    vector<int> lista(n);

    for (int i = 0; i < n; i++) {
        cin >> lista[i];
    }
    for (int i = 0; i < n; i++) {
        if (lista[i] >= lista[k - 1] && lista[i] > 0) {
            passa++;
        }
    }
    cout << passa << endl;
    return 0;
}