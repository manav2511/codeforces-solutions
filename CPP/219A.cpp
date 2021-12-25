#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
	int k;
	string s;
    cin >> k;
    cin >> s;

    map<char, int> c;

    for (int i = 0; i < s.length(); ++i)
    {
    	c[s[i]]++;
    }

    string result = "";

    for (auto i: c)
    {
    	if (i.second % k != 0) { result = "-1"; cout << result; return; }
    	result += string(i.second / k, i.first);
    }

    for (int i = 0; i < k; ++i)
    {
        cout << result;
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