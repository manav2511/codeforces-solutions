#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    int n, k;
    cin >> n >> k;

    if ((n-k) < (k-1)) { cout << -1 << "\n";}
    else {
    	int nextx = 0;
    	int nexty = 0;
    	int R = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		for (int j = 0; j < n; ++j)
    		{
    			if (j == nextx && i == nexty && R < k) {
    				cout << "R";
    				nextx = j+2;
    				nexty = i+2;
    				R++;
    			} else { cout << "."; }
    		}
    		cout << "\n";
    	}
    }
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