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
	list<char> h{'h', 'e', 'l', 'l', 'o'};

	for (int i = 0; i < s.size(); ++i)
	{		
		if (s[i] == h.front()) {
			h.pop_front();
		}
	}

	if (h.size() == 0) { 
		cout << "YES"; 
	} else {
		cout << "NO";
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