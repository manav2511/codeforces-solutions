#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    ll y, k, n;
    cin >> y >> k >> n;

    ll x = k - y % k;
    ll top = n - y;

    if (x <= top) {
    	cout << x << " ";

    	x += k;
    	while (x <= top) {
    		cout << x << " ";
    		x += k;
    	}
	} else { cout << -1;}
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