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

    string result = "";
    for (int i = 0; i < s.size(); ++i)
    {
    	char c = tolower(s[i]);
    	if (c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u' || c=='y') {
    		continue;
    	} else {
    		result += '.';
    		result += c;
    	}
    }

    cout << result;
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