
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b;
        vector<int> c;
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int mx = *max_element(a.begin(), a.end());
        int mn = *min_element(a.begin(), a.end());

        if (mx == mn) {
            cout << -1 << endl;
            continue;
        }

        for (int i = 0; i < n; i++) {
            if (a[i] == mx) {
                c.push_back(a[i]);
            } else {
                b.push_back(a[i]);
            }
        }

        cout << b.size() << " " << c.size() << endl;

        for (int i = 0; i < b.size(); i++) {
            cout << b[i] << " ";
        }
        cout << endl;

        for (int i = 0; i < c.size(); i++) {
            cout << c[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
