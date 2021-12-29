#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
	int a;

	cin >> a;

	// regular polygon side a = (n-2)*180/n
	// rearrange to get n = 360/180-a
	float n = 360.0/(180.0-a);

	if (int(n) == n) cout << "YES" << "\n"; 
	else cout << "NO" << "\n";
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