#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    string s, ans;

    cin >> s;

    ans = s;

    int upcn = 0;

    ans[0] = toupper(ans[0]);

    if (isupper(s[0])) upcn++;
    for (int i = 1; i < s.size(); ++i)
    {
        if (isupper(s[i])) {
            upcn++;
            ans[i] = tolower(ans[i]);
        } else {
            ans = s; 
            break;
        }
    }

    if (upcn == s.size()) ans[0] = tolower(s[0]);

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