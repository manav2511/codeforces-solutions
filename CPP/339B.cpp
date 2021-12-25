#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
	ll n, m;
	cin >> n >> m;

	vector<int> a(m+1);
	ll curr = 1, ans = 0;
	for (int i = 0; i < m; ++i)
	{
		cin >> a[i];

		if (a[i] == curr) { continue; }
		else if (a[i] < curr) { ans += n-(curr-a[i]); curr = a[i]; }
		else { ans += a[i]-curr; curr = a[i]; }
	}

	cout << ans;
    
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