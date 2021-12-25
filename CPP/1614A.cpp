#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    int n, l, r, k;

    cin >> n >> l >> r >> k;

    vector<int> a;

    for (int i = 0; i < n; ++i)
    {
    	int x;
    	cin >> x;
    	a.push_back(x);
    }

    std::sort(a.begin(), a.end());

    int sum = 0;
    int num = 0;

    for (int i = 0; i < n; ++i)
    {
    	if (a[i] < l || a[i] > r) continue;

    	int b = sum + a[i];

    	if (b > k) break;
    	else sum = b;

    	num++;
    }

    cout << num << endl;


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