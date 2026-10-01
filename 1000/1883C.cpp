#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        int ans = INT_MAX;
        if (k == 4) {
            int even = 0;
            for (int x : a) {
                if (x % 2 == 0) even++;
                ans = min(ans, (4 - x % 4) % 4);
            }
            if (even >= 2) ans = 0;
            else if (even == 1) ans = min(ans, 1);
        }
        else {
            for (int x : a) {
                int need = (k - x % k) % k;
                ans = min(ans, need);
            }
        }
        cout << ans << endl;
    }
    return 0;
}