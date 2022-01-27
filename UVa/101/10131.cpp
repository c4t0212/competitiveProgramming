#pragma GCC optimize("Ofast")
#define letmeAC ios_base::sync_with_stdio(0), cin.tie(0)
#include <bits/stdc++.h>
using namespace std;

struct point{
	int a, b, plen = 1, pre = -1, idx;
	point(int x, int y, int id) : a(x), b(y), idx(id) {}
};

void ouo(vector<point> ans, int idx) {
	if(ans[idx].pre != -1) ouo(ans,  ans[idx].pre);
	cout << ans[idx].idx + 1 << '\n';
}

int main() {
	#ifdef plsAC
		freopen("ipt.in", "r", stdin);
		freopen("opt.out", "w", stdout);
	#endif
	letmeAC;
	int a, b, mx = -1, idx = -1, k = 0;
	vector<point> pt;

	while(cin >> a >> b) pt.emplace_back(a, b, k++);
	sort(pt.begin(), pt.end(), [](point x, point y){ return x.b > y.b; });

	for(int i = 0; i < pt.size(); i++) {
		for(int j = i + 1; j < pt.size(); j++) {
			if(pt[i].a < pt[j].a && pt[i].b > pt[j].b && (pt[i].plen + 1 > pt[j].plen)) 
				pt[j].pre = i, pt[j].plen = pt[i].plen + 1;
		}

		mx = max(mx, pt[i].plen);
		if(mx == pt[i].plen) idx = i;
	}

	cout << mx << '\n';
	ouo(pt, idx);
}