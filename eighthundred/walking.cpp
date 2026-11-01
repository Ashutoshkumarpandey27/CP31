#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        long long diagonal = d - b;
        long long left = a + diagonal - c;

        if(diagonal < 0 || left < 0) {
            cout << -1 << endl;
        }
        else {
            cout << diagonal + left << endl;
        }
    }

    return 0;
}