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

    std::map<int, std::vector<int>> pos;

    for (int i = 0; i < n; ++i)
    {
        int k;
        cin >> k;

        pos[k].push_back(i);
    }

    std::vector<std::pair<int, int>> ans;

    std::map<int, std::vector<int>>::iterator itr;
    for (itr = pos.begin(); itr != pos.end(); ++itr) {
        int k;
        k = itr->first;

        if (pos[k].size() == 1) {
            ans.push_back(make_pair(k, 0));
        } else {
            set<int> s;

            for (int i = 1; i < pos[k].size(); ++i)
            {
                s.insert(abs(pos[k][i]-pos[k][i-1]));
            }

            if (s.size() == 1) { ans.push_back(make_pair(k, *s.begin())); }
        }
    }

    cout << ans.size() << endl;

    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i].first << " " << ans[i].second << endl;
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