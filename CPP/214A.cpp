#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    int n, m;
    cin >> n >> m;

    int result = 0;

    for (int a = 0; a <= m; a++) {
        for (int b = 0; b <= n; b++) {
            if (int(pow(a, 2)+b==n && int(pow(b, 2)+a==m))) {
                result++;
            }
        }
    }

    cout << result;
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) {
        solve();
    }
    return 0;
}