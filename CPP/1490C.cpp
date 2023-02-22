#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    ll x;
    cin >> x;

    for (ll i = 1; i <= cbrt(x); ++i)
    {
    	double b = cbrt(x-pow(i, 3));
    	double iptr;

    	if (modf(b, &iptr) == 0.0 && b > 0) {
    		if (pow(i, 3) + pow(b, 3) == x) {
    			cout << "YES\n";
    			return;
  		  	}
      	}
    }

    cout << "NO\n";
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