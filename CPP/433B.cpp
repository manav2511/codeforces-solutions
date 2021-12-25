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

	int arr[n+1];
	int arrs[n+1];

	long long int sarr[n+1];
	long long int sarrs[n+1];

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		arr[i] = arrs[i] = x;
	}

	sort(arrs, arrs+n);

	ll sum = 0;
	ll sums = 0;

	for (int i = 0; i < n; ++i)
	{
		sum += arr[i];
		sums += arrs[i];
		sarr[i] = sum;
		sarrs[i] = sums;

	}

	int m;

	cin >> m;

    for (int i = 0; i < m; ++i)
	{	
		ll result = 0;
		int type, l, r;
		cin >> type >> l >> r;

		if (type == 1) {
			result = sarr[r-1] - sarr[l-1] + arr[l-1];
		} else {
			result = sarrs[r-1] - sarrs[l-1] + arrs[l-1];
		}

		cout << result << endl;
	};
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