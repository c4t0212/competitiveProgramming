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
	int n, cs = 1, block[555][6], cal[555][6], ans[3000];
	string opt[] = {"front", "back", "left", "right", "top", "bottom"};

	while(cin >> n && n) {
		for(int i = n; i >= 1; i--) for(int j = 0; j < 6; j++) cin >> block[i][j];
		int mx = -1, idx;

		for(int i = 1; i <= n; i++) for(int k = 0; k < 6; k++) {
			cal[i][k] = 1; ans[i * 6 + k] = 0;
			for(int j = 1; j < i; j++) for(int o = 0; o < 6; o++) {
				if(block[i][k ^ 1] == block[j][o] && cal[i][k] <= cal[j][o]) {
					cal[i][k] = cal[j][o] + 1; 
					ans[6 * i + k] = 6 * j + o;
				}
			}
			if(mx < cal[i][k]) mx = cal[i][k], idx = 6 * i + k;
		}

		cout << "Case #" << cs++ << '\n' << mx << '\n';
		
		n++;
		while(idx) {
			cout << n - idx / 6 << ' ' << opt[idx % 6] << '\n';
			idx = ans[idx];
		}

		cout << '\n';
	}
}