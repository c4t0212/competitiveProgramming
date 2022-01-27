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
	int n, cs = 1, fst = 1;
	vector<int> dp;

	while(cin >> n && n != -1) {
		if(!fst) cout << '\n';
		fst = 0;
		dp.clear(); dp.emplace_back(n);
		while(cin >> n && n != -1) {
			if(n <= dp.back()) dp.emplace_back(n);
			else *upper_bound(dp.begin(), dp.end(), n, greater<int>()) = n;
		}

		cout << "Test #"  << cs++ << ":\n  maximum possible interceptions: ";
		cout << dp.size() << '\n';
	}
}