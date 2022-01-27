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
	string s, ans;

	while(cin >> s) {
		vector<string> sa, sb;
		sa.emplace_back(s);
		while(cin >> s && s != "#") sa.emplace_back(s);
		while(cin >> s && s != "#") sb.emplace_back(s);
		vector<vector<int>> dp(sa.size() + 1, vector<int>(sb.size() + 1, 0));

		for(int i = 1; i <= sa.size(); i++) {
			for(int j = 1; j <= sb.size(); j++) {
				if(sa[i - 1] == sb[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
				else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}

		int i = sa.size(), j = sb.size();
		ans = "";
		while(dp[i][j] != 0) {
			if(sa[i - 1] == sb[j - 1]) ans = sb[j - 1] + " " + ans, i--, j--;
			else if(dp[i - 1][j] >= dp[i][j - 1]) i--;
			else j--;
		}
		
		cout << ans.substr(0, ans.size() - 1) << '\n';
	}
}