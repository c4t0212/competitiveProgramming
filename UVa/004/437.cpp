#pragma GCC optimize("Ofast")
#define letmeAC ios_base::sync_with_stdio(0), cin.tie(0)
#include <bits/stdc++.h>
using namespace std;

struct point {
	int x, y, z;
	point(int a, int b, int c) : x(a), y(b), z(c) {}
};

int main() {
	#ifdef plsAC
		freopen("ipt.in", "r", stdin);
		freopen("opt.out", "w", stdout);
	#endif
	letmeAC;
	int n, a, b, c, cs = 1, mx;

	while(cin >> n && n) {
		vector<point> pt; mx = -1;

		for(int i = 0; i < n; i++) {
			cin >> a >> b >> c;
			pt.emplace_back(a, b, c);
			pt.emplace_back(a, c, b);
			pt.emplace_back(b, a, c);
			pt.emplace_back(b, c, a);
			pt.emplace_back(c, a, b);
			pt.emplace_back(c, b, a);
		}

		vector<int> ans(pt.size(), 0);
		sort(pt.begin(),pt.end(), [](point a, point b){ return a.x < b.x; });

		for(int i = 0; i < pt.size(); i++) {
			for(int j = 0; j < i; j++) {
				if(pt[j].x < pt[i].x && pt[j].z < pt[i].z) ans[i] = max(ans[i], ans[j]);
			}
			ans[i] += pt[i].y;
			mx = max(mx, ans[i]);
		}

		//for(auto i : pt) cout << i.x << ' ' << i.y << ' ' << i.z << '\n';
		cout << "Case " << cs++ << ": maximum height = " << mx << '\n';
	}
}