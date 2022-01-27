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
	int n, ipt;
	cin >> n;
	vector<int> idx(n), nums(n), lis;
	for(auto &i : nums) cin >> i;
	while(cin >> ipt) {
		lis.clear();
		idx[ipt - 1] = nums[0];
		for(int i = 1; i < n; i++) cin >> ipt, idx[ipt - 1] = nums[i];
		for(int i = 0; i < n; i++) {
			if(lis.empty() || idx[i] > lis.back()) lis.emplace_back(idx[i]);
			else *lower_bound(lis.begin(), lis.end(), idx[i]) = idx[i];
		}

		cout << lis.size() << '\n';
	}
}