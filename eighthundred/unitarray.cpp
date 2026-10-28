#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        int neg = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];

            if (arr[i] == -1) {
                neg++;
            }
        }

        int ans = 0;
        int sum = n - 2 * neg;

        if (neg % 2 != 0) {
            neg--;
            sum += 2;
            ans++;
        }

        
        while (sum < 0) {
            sum += 4;
            ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}