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

    std::map<string, int> m;

    for (int i = 0; i < n; ++i)
     {
     	string s;

     	cin >> s;

     	if (m[s] == 0) cout << "OK" << endl;
     	else cout << s << m[s] << endl;

     	m[s]++;
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