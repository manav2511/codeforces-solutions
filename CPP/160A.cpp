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

    vector<int> coins;
    int total = 0;
    for (int i = 0; i < n; ++i)
    {
    	int x;
    	cin >> x;
    	total += x;
    	coins.push_back(x);
    }

    sort(coins.begin(), coins.end(), greater<int>());
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
    	sum += coins[i];
    	if (sum > (total-sum)) {
    		ans = i+1;
    		break;
    	}
    }

    cout << ans;
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