#pragma GCC optimize("Ofast")
#define letmeAC ios_base::sync_with_stdio(0), cin.tie(0)
#include <bits/stdc++.h>
using namespace std;

struct node {
	int f, t, dd;
	node(int a, int b, int c) : f(a), t(b), dd(c) {}
};

void owo(vector<int> step, int idx) {
	if(idx == 0) return;
	owo(step, step[idx]);
	cout << ' ' << idx;
}

int main() {
	#ifdef plsAC
		freopen("ipt.in", "r", stdin);
		freopen("opt.out", "w", stdout);
	#endif
	letmeAC;
	int n, m, t, dd, st, ed, cs = 1;
	while(cin >> n && n) {
		vector<node> edge;
		for(int i = 1; i <= n; i++) {
			cin >> m;
			for(int j = 0; j < m; j++) cin >> t >> dd, edge.emplace_back(i, t, dd);
		}
		cin >> st >> ed;

		vector<int> dis(n + 1, 1e5), step(n + 1, 0);
		dis[st] = 0;

		for(int i = 0; i < n; i++) {
			for(auto j : edge) if(dis[j.t] > dis[j.f] + j.dd) 
				dis[j.t] = dis[j.f] + j.dd, step[j.t] = j.f;
		}


		cout << "Case " << cs++ << ": Path =";
		owo(step, ed);
		cout << "; " << dis[ed] << " second delay\n";
	}
}