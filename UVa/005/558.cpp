#pragma GCC optimize("Ofast")
#define letmeAC ios_base::sync_with_stdio(0), cin.tie(0)
#include <bits/stdc++.h>
using namespace std;

struct node {
	int b, e, val;
	node(int a, int b, int c) : b(a), e(b), val(c) {}
};

int main() {
	#ifdef plsAC
		freopen("ipt.in", "r", stdin);
		freopen("opt.out", "w", stdout);
	#endif
	letmeAC;
	bool ans;
	int n, m, f, t, val;
	vector<int> dis, tmp;
	vector<node> mp;
	cin >> n;

	while(cin >> n >> m) {
		ans = true;
		mp.clear(); dis.assign(n, 999999);
		for(int i = 0; i < m; i++) cin >> f >> t >> val, mp.emplace_back(f, t, val);
		dis[0] = 0;

		for(int i = 0; i < n; i++) {
			tmp = dis;
			for(int j = 0; j < m; j++) dis[mp[j].b] = min(dis[mp[j].b], dis[mp[j].e] + mp[j].val);
			if(i == n - 1 && tmp != dis) ans = false;
		}
		if(!ans) cout << "possible\n";
		else cout << "not possible\n";
	}
}