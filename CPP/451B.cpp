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

 	int arr[n+1];
    int barr[n+1];

 	for (int i = 0; i < n; ++i)
 	{
 		cin >> arr[i];
        barr[i] = arr[i];
 	}

    sort(barr, barr+n);

    std::map<int, int> mp;

 	for (int i = 0; i < n; ++i)
    {
        mp[barr[i]] = i;
    }
    for (int i = 0; i < n; ++i)
    {
        arr[i] = mp[arr[i]];    
    }

    int L = -1;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] != i) { L = i; break; }
    }

    int R = -1;
    for (int i = n-1; i >= 0; --i)
    {
        if (arr[i] != i) { R = i; break; }
    }

    if (L == -1 || R == -1) {
        cout << "yes\n";
        cout << 1 << " " << 1 << "\n";
    } else {
        reverse(arr+L, arr+R+1);
        bool cor = true;

        for (int i = 0; i < n; ++i)
        {
            if (arr[i] != i) { cor = false; }
        }
        if (cor) { cout << "yes\n" << L+1 << " " << R+1 << "\n"; } else { cout << "no"; }
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