#define letmeAC ios_base::sync_with_stdio(0), cin.tie(0)
#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifdef plsAC
		freopen("ipt.in", "r", stdin);
		freopen("opt.out", "w", stdout);
	#endif
	letmeAC;
	ll k, ans;
	int n, ia, ib;
	unordered_map<ll, int> mp;
	vector<ll> nums;

	while(cin >> n >> k) {
		ans = 0, ia = n >> 1, ib = n - ia;
		nums.resize(n), mp.clear();
		for(auto &i : nums) cin >> i;

		for(int i = 1; i < (1 << ia); i++) {
			ll cur = 0;
			for(int j = 0; j < ia; j++) if(i & (1 << j))
				cur += nums[j];
			if(cur == k) ans++;
			mp[cur]++;
		}

		for(int i = 1; i < (1 << ib); i++) {
			ll cur = 0;
			for(int j = 0; j < ib; j++) if(i & (1 << j))
				cur += nums[ia + j];
			if(cur == k) ans++;
			ans += mp[k - cur];
		}
		cout << ans << "\n";
	}
}