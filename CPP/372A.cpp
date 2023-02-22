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

	vector<int> k;

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		k.push_back(x);
	}

	sort(k.begin(), k.end());
	int mid = n/2;
	int res = n;

	for (int i = 0; i < n/2; ++i)
	{
		while (true) {
			if (k[i]*2<=k[mid]) {
				res--;
				mid++;
				break;
			}
			else {
				mid++;
			}

			if (mid==n) {
				break;
			}
		}

		if (mid == n) { break; }
	}

	cout << res << "\n";
    
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