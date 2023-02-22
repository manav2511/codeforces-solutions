#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e11;

void solve() {
	ll n, k;
	cin >> n >> k;

	ll t = n * floor(k / (n-1));
	//cout << "t: " << t << "\n";
	ll m = k % (n-1);

	ll ans;
	if (m == 0) {
		ans = t - 1;
	} else {
		ans = t + m;
	}

	cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) {
        solve();
    }
    return 0;
}