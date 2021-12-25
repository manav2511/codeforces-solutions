#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
	int t, sx, sy, ex, ey;

	cin >> t >> sx >> sy >> ex >> ey;

	int result = 0;

	string s;

	cin >> s;

	int xn = ex-sx;
	int yn = ey-sy;

	for (int i = 0; i < t; ++i)
	{
		if (sx == ex && sy == ey) { break; }
		else if (s[i] == 'N') { if (abs(ey-(sy+1)) < abs(ey-sy)) { sy++; result++; } else { result++; }}
		else if (s[i] == 'S') { if (abs(ey-(sy-1)) < abs(ey-sy)) { sy--; result++; } else { result++; }}
		else if (s[i] == 'E') { if (abs(ex-(sx+1)) < abs(ex-sx)) { sx++; result++; } else { result++; }}
		else if (s[i] == 'W') { if (abs(ex-(sx-1)) < abs(ex-sx)) { sx--; result++; } else { result++; }}
	}

    if (sx != ex || sy != ey) {cout << -1; } else { cout << result; }
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