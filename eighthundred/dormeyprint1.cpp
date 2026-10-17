```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int distinct = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[i - 1]) {
                distinct++;
            }
        }

        if (distinct <= 2) {
            if (distinct == 1) {
                cout << "YES\n";
            } else {
                int count1 = 0, count2 = 0;

                for (int i = 0; i < n; i++) {
                    if (a[i] == a[0]) {
                        count1++;
                    } else {
                        count2++;
                    }
                }

                if (abs(count1 - count2) <= 1) {
                    cout << "YES\n";
                } else {
                    cout << "NO\n";
                }
            }
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
