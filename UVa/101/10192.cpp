#pragma GCC optimize("Ofast")
#define letmeAC ios_base::sync_with_stdio(0), cin.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifdef plsAC
		freopen("ipt.in", "r", stdin);
		freopen("opt.out", "w", stdout);
	#endif
	letmeAC;
	int cs = 1;
	string a, b;
	vector<vector<int>> dp;

	while(getline(cin, a), getline(cin, b) && a != "#") {
		dp.assign(a.size() + 1, vector<int>(b.size() + 1, 0));

		for(int i = 1; i <= a.size(); i++) {
			for(int j = 1; j <= b.size(); j++) {
				if(a[i - 1] == b[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
				else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}

		cout << "Case #" << cs++ << ": you can visit at most ";
		cout << dp[a.size()][b.size()] << " cities.\n";
	}
}