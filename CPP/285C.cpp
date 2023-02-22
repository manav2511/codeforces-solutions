#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    ll n;
    cin >> n;

    ll arr[n+1];
    for (ll i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }

    sort(arr, arr+n);
    ll ans;
    for (ll i = 0; i < n; ++i)
    {
    	ans += abs(arr[i] - (i + 1));
    }

    cout << ans << "\n";
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