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

    vector<int> a;

    for (int i = 0; i < n; ++i)
    {
    	int x;
    	cin >> x;

        cout << x;

    	a.push_back(x);
        cout << a[i];
    }

    int power = 1;

    for (int i = 0; i < n; ++i)
    {
        //cout << a[i];
    	while (a[i] % 2 != 0) {
    		a[i] /= 2;
    		power *= 2;
    	}
    }

    std::sort(a.begin(), a.end());

    a[-1] *= power;

    cout << std::accumulate(a.begin(), a.end(), 0) << "\n";
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