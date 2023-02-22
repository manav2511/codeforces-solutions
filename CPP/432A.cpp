#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
	int n, k;
	cin >> n >> k;

    vector<int> y;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        y.push_back(x);
    }

    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (5 - y[i] >= k) {
            count++;
        } 
    }

    cout << count/3 << "\n";
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