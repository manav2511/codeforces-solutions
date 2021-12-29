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

	string s;
	cin >> s;

	int unmatched = 0;
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == '(') {
			unmatched++;
		} else {
			unmatched--;

			if (unmatched < 0) {
				ans++;
				unmatched = 0;
			}
		}
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