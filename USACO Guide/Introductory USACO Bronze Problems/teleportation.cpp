// link to the problem: https://usaco.org/index.php?page=viewproblem2&cpid=807

#include <cstdio>
#include <iostream>
using namespace std;

int main(void) {
    freopen("teleport.in", "r", stdin);
	freopen("teleport.out", "w", stdout);

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if(abs(b - a) > abs(min(a, b) - min(x, y)) + abs(max(a, b) - max(x, y))) {
        cout << abs(min(a, b) - min(x, y)) + abs(max(a, b) - max(x, y));
    }
    else {
        cout << abs(b - a);
    }
    
    return 0;
}