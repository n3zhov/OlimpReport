#include <iostream>
#include <vector>

using namespace std;

#define int long long

int32_t main() {
    int n;
    cin >> n;
    n++;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    int ans = 0;
    for (int i = n - 1; i > 0; --i) {
        if (b[i] > a[i]) {
            b[i] -= a[i];
            a[i] = 0;
        } else {
            a[i] -= b[i];
            b[i] = 0;
        } 
        if (b[i] % 2 == 0) {
            b[i - 1] += b[i] / 2;
            ans += b[i] / 2;
        } else {
            b[i - 1] += (b[i] + 1) / 2;
            ans += (b[i] + 1) / 2;
        }
        b[i] = 0;
    }
    if (a[0] - b[0] < 0) {
        cout << -1;
    }
    else cout << ans << '\n';
}