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

	map<pair<int, int>, int> t;

	for (int i = 0; i < n; ++i)
    {
        int h, m;
        cin >> h >> m;
        t[make_pair(h,m)] += 1;
    }

    int best = 0;

    map<pair<int, int>, int>::iterator itr;
    for (itr = t.begin(); itr != t.end(); ++itr)
    {
    	best = max(itr->second, best);
    }

    cout << best;
    
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