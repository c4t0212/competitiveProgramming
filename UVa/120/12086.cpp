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
	string mode;
	int nums[200005], n, nb, a, b, idx, cs = 1;
	auto query = [&](int ii){
		int ans = 0;
		while(ii) ans += nums[ii], ii -= ii & (-ii);
		return ans;
	};

	while(cin >> n && n) {
		memset(nums, 0, sizeof(nums));
		for(int i = 1; i <= n; i++) {
			cin >> nb;
			idx = i;
			while(idx <= n)	nums[idx] += nb, idx += idx & -idx;
		}

		if(cs != 1) cout << '\n';
		cout << "Case " << cs++ << ":\n";

		while(cin >> mode && mode != "END") {
			cin >> a >> b;
			if(mode == "M") cout << query(b) - query(a - 1) << '\n';
			else {
				b = b - query(a) + query(a - 1);
				while(a <= n) nums[a] += b, a += a & -a;
			}
		}
	}
}
