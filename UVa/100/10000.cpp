#pragma GCC optimize("Ofast")
#define inf INT_MAX
#define letmeAC ios_base::sync_with_stdio(0), cin.tie(0)
#include <bits/stdc++.h>
using namespace std;

struct node {
	int f, t;
	node(int a, int b) : f(a), t(b) {}
};

int main() {
	#ifdef plsAC
		freopen("ipt.in", "r", stdin);
		freopen("opt.out", "w", stdout);
	#endif
	letmeAC;
	int n, st, f, t, cs = 1;

	while(cin >> n >> st) {
		vector<node> edge;
		while(cin >> f >> t && f + t) edge.emplace_back(f, t);
		vector<int> dis(n + 1, -inf); dis[st] = 0;

		for(int i = 1; i < n; i++) {	
			for(auto v : edge)  {
				dis[v.t] = max(dis[v.t], dis[v.f] + 1); 
			}
		}
		
		int ans = -1, idx;
		for(int i = 1; i <= n; i++) if(dis[i] > ans) ans = dis[i], idx = i;

		cout << "Case "  << cs++ << ": The longest path from " << st << " has length " << ans;
		cout << ", finishing at " << idx << ".\n\n";
	}
}