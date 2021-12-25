#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
	int n = 5;

	int g[6][6];

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j) {
			cin >> g[i][j];
		}
	}

	int x[6];
	int best = -1;
	int sum;

	for (int i = 0; i < n; ++i)
	{
		x[i] = i;
	}

	sum = g[x[0]][x[1]] + g[x[1]][x[0]] + g[x[2]][x[3]] + g[x[3]][x[2]];
	sum += g[x[1]][x[2]] + g[x[2]][x[1]] + g[x[3]][x[4]] + g[x[4]][x[3]];
	sum += g[x[2]][x[3]] + g[x[3]][x[2]];
	sum += g[x[3]][x[4]] + g[x[4]][x[3]];

	best = max(best, sum);
	
	while(next_permutation(x, x+n)) {
		sum = g[x[0]][x[1]] + g[x[1]][x[0]] + g[x[2]][x[3]] + g[x[3]][x[2]];
		sum += g[x[1]][x[2]] + g[x[2]][x[1]] + g[x[3]][x[4]] + g[x[4]][x[3]];
		sum += g[x[2]][x[3]] + g[x[3]][x[2]];
		sum += g[x[3]][x[4]] + g[x[4]][x[3]];

		best = max(best, sum);
	}

	cout << best;
    
}
k
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