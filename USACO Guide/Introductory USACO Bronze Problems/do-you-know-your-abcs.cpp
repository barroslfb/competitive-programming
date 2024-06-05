// link to the problem: https://usaco.org/index.php?page=viewproblem2&cpid=1059

#include <bits/stdc++.h>
using namespace std;

int main(void) {

    int numbers[7];
    int a, b, c;

    for(int i = 0; i < 7; i++) {
        cin >> numbers[i];
    }
    sort(numbers, numbers + 7);

    a = numbers[0];
    b = numbers[1];
    c = numbers[6] - a - b;

    cout << a << " " << b << " " << c;    

    return 0;
}