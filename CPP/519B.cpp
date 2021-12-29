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

	ll sum1 = 0;
	ll sum2 = 0;
	ll sum3 = 0;


	for (int i = 0; i < n; ++i)
	{
		ll x;
		cin >> x;
		sum1 += x; 
	}
    
    for (int i = 0; i < n-1; ++i)
	{
		ll x;
		cin >> x;
		sum2 += x; 
	}

	for (int i = 0; i < n-2; ++i)
	{
		ll x;
		cin >> x;
		sum3 += x; 
	}

	cout << sum1-sum2 << "\n";
	cout << sum2-sum3 << "\n";
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