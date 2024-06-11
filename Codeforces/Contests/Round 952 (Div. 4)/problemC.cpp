#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t;
    cin >> t;

    for(int i=0; i<t; i++) {
        int ele;
        cin >> ele;
        int array[ele];
        int count = 0;
        long long sum = 0;
        for(int j = 0; j<ele; j++){
            cin >> array[j];
            sum+=array[j];
            for(int k=0; k<j+1; k++) {
                if(array[k]==sum-array[k]) {
                    count++;
                    break;
                }
            }
        }
        cout << count << endl;
    }
    
    return 0;
}