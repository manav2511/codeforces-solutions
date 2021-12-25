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

	vector<pair<ll, ll>> a(n);

	for (ll i = 0; i < n; ++i)
	{
		cin >> a[i].first;
		a[i].second = i+1;
	}

	std::sort(a.rbegin(), a.rend());

	vector<ll> res(n+1, 0);

	ll sum = 0;
	ll e = 1;
	for (ll i = 0; i < n; ++i)
	{
		sum += abs(2*(a[i].first*e));
		if (i % 2 != 0) {
			res[a[i].second] = (-1)*e;
			e++;
		} else {
			res[a[i].second] = e;
		}
	}

	cout << sum << "\n";

	for (ll i = 0; i < n+1; ++i)
	{
		cout << res[i] << " ";
	}
	cout << "\n";
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