#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    int x, y, a, b;
    cin >> x >> y >> a >> b;

    vector<pair<int, int>> p;

    for (int i = a; i <= x; ++i)
    {
    	for (int j = b; j <= y; ++j)
    	{
    		if (i > j) p.push_back(make_pair(i, j));
    	}
    }


    cout << p.size() << "\n";

    for (int i = 0; i < p.size(); ++i)
    {
    	cout << p[i].first << " " << p[i].second << "\n";
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