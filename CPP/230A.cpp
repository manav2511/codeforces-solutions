#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
	int s, n;
	cin >> s >> n;

    vector<pair<int, int>> p(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> p[i].first >> p[i].second;
    }

    sort(p.begin(), p.end());

    string result = "YES";

    for (int i = 0; i < n; ++i)
    {
        //cout << p[i].first << p[i].second << endl;
        //cout << s;
        if (s > p[i].first) { s+=p[i].second; }
        else { result = "NO"; break;}
    }

    cout << result;
    
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