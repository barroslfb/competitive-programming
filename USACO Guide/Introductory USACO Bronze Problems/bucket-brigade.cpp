// link to the problem: https://usaco.org/index.php?page=viewproblem2&cpid=939
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);

    char matrix[10][10];
    int b[2], r[2], l[2];
    int cows = 0;
    
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 'B') {
                b[0] = i;
                b[1] = j;
            }
            else if (matrix[i][j] == 'R') {
                r[0] = i;
                r[1] = j;
            }
            else if (matrix[i][j] == 'L') {
                l[0] = i;
                l[1] = j;
            }
        }
    }

    // Same row
    if (b[0] == l[0]){
        if (r[0] == b[0] && min(b[1], l[1]) < r[1] && r[1] < max(b[1], l[1])) {
            cows = abs(b[1] - l[1]) + 1;
        }
        else {
            cows = abs(b[1] - l[1]) - 1;
        }
    // Same column
    }
    else if (b[1] == l[1]){
        if (r[1] == b[1] && min(b[0], l[0]) < r[0] && r[0] < max(b[0], l[0])) {
            cows = abs(b[0] - l[0]) + 1;
        }
        else {
            cows = abs(b[0] - l[0]) - 1;
        }
    }
    else {
        cows = abs(l[0] - b[0]) + abs(l[1] - b[1]) - 1;
    }

    cout << cows;
    return 0;
}