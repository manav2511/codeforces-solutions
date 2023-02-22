#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    ll n;
    cin >> n;

    int ans = 0;
    if (n > 0) {
    	cout << n << "\n";
    }
    else {
    	
    	n = abs(n);

    	if (n  % 10 > (n % 100 - n % 10) / 10) {
    		ans = n/10;
    	} else {
    		int temp = n / 100;
    		ans = temp*10 + (n % 10);
    	}

    	cout << -1*ans << "\n";
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