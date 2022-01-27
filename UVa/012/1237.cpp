#pragma GCC optimize("Ofast")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

struct car {
	int lo, up;
	string name;
};

int main() {
	IOS;
	//freopen("ipt.in", "r", stdin);
	//freopen("opt.out", "w", stdout);
	int t, n, m, moy, cnt, idx;
	cin >> t;

	while(t--) {
		cin >> n;
		vector<car> tb(n);
		for(int i = 0; i < n; i++) 
			cin >> tb[i].name >> tb[i].lo >> tb[i].up;

		cin >> m;
		sort(tb.begin(), tb.end(), [](car a, car b){
			return a.lo < b.lo;
		});

		for(int i = 0; i < m; i++) {
			cnt = 0;
			cin >> moy;

			for(int j = 0; j < n; j++) {
				if(tb[j].lo <= moy && moy <= tb[j].up) idx = j, cnt++;
				else if(moy < tb[j].lo) break;
			}

			if(cnt == 1) cout << tb[idx].name << '\n';
			else cout << "UNDETERMINED\n";
		}
		if(t) cout << '\n';
	}
}