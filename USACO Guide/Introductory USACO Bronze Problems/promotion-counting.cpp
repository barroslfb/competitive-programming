// link to the problem: https://usaco.org/index.php?page=viewproblem2&cpid=591

#include <cstdio>
#include <iostream>
using namespace std;

int main(void) {
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);

    int ini[4];
    int fin[4];

    for (int i = 0; i < 4; i++) {
        cin >> ini[i] >> fin[i];
    }

    int golPla = fin[3] - ini[3];
    int silGol = fin[2] - ini[2] + golPla;
    int broSil = fin[1] - ini[1] + silGol;
    
    cout << broSil << endl << silGol << endl << golPla;

    return 0;
}