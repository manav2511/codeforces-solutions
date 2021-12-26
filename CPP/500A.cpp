#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
	int n, t;
	cin >> n >> t;

	vector<int> a(n+2);
	for (int i = 1; i < n+1; ++i)
	{
		cin >> a[i];
	}

	int curr = 1;
	while (curr < t) {
		curr += a[curr];
	}

	if (curr == t) cout << "YES"; else cout << "NO";
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