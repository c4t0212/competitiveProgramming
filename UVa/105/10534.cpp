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
	int n;
	while(cin >> n) {
		vector<int> nums(n), lis, rlis, ans(n), rans(n);
		for(auto &i : nums) cin >> i;
	
		for(int i = 0; i < n; i++) {
			if(lis.empty() || nums[i] > lis.back()) ans[i] = lis.size(), lis.emplace_back(nums[i]);
			else *lower_bound(lis.begin(), lis.end(), nums[i]) = nums[i], ans[i] = lower_bound(lis.begin(), lis.end(), nums[i]) - lis.begin();
			if(rlis.empty() || nums[n - 1 - i] > rlis.back()) rans[n - 1 - i] = rlis.size(), rlis.emplace_back(nums[n - 1 - i]);
			else *lower_bound(rlis.begin(), rlis.end(), nums[n - 1 - i]) = nums[n - 1 - i] , rans[n - 1 - i] = lower_bound(rlis.begin(), rlis.end(), nums[n - 1 - i]) - rlis.begin();
		}

		int mx = -1;
		for(int i = 0; i < n; i++) mx = max(mx, min(ans[i], rans[i]));
		
		cout << mx * 2 + 1 << '\n';
	}
}