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

    std::vector<string> result;
    stringstream ss(s);
    string item;

    while (std::getline(ss, item, '+')) {
        result.push_back(item);
    }

    sort(result.begin(), result.end());
    bool first = true;
    for (const auto &str : result) {
        if (first) { first = false; } else { cout << "+"; }
        cout << str;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}