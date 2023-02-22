#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    string s;
    cin >> s;

    int m;
    cin >> m;

    vector<int> v;
    v.push_back(0);
    int sum = 0;
    for (int i = 1; i < s.length(); ++i)
    {	
    	if (s[i-1] == s[i]) sum++;
    	v.push_back(sum);
    }

    for (int i = 0; i < m; ++i)
    {
    	int l, r;
    	cin >> l >> r;

    	cout << v[r-1] - v[l-1] << "\n";
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