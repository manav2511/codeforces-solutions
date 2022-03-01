#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
	int n;
	cin >> n;

	vector<ll> b;
	map<ll, ll> mp;
	
	string ans = "NO\n";
	for (int i = 0; i < n; ++i)
	{
		ll x;
		cin >> x;

		b.push_back(x);
		mp[x]++;
		if (mp[x] > 1) {
			ans = "YES\n";
		}
	}
	
	cout << ans;
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 0;
    cin >> tc;
    for (int t = 0; t < tc; t++) {
        solve();
    }
    return 0;
}
