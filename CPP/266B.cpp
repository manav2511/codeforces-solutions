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

	char c[n+1];

	for (int i = 0; i < n; ++i)
	{
		cin >> c[i];
	}

	for (int i = 0; i < t; ++i)
	{
		for (int j = 0; j < n-1; ++j)
		{
			if (c[j] == 'B' && c[j+1] == 'G') {
				c[j] = 'G';
				c[j+1] = 'B';
				j++;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout << c[i];
	}
	
    
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