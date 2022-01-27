#define letmeAC ios_base::sync_with_stdio(0), cin.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifdef plsAC
		freopen("ipt.in", "r", stdin);
		freopen("opt.out", "w", stdout);
	#endif
	letmeAC;
	int n, m, cs = 0;
	vector<vector<char>> mp, tab;

	while(cin >> n >> m && n) {
		mp.assign(n + 2, vector<char>(m + 2, '*'));
		tab.assign(n + 2, vector<char>(m + 2));
		if(++cs > 1) cout << '\n';
		for(int i = 1, cnt = 1; i <= n; i++) for(int j = 1; j <= m; j++) {
			cin >> mp[i][j];
			if(mp[i][j] != '*' && (mp[i - 1][j] == '*' || mp[i][j - 1] == '*')) 
				tab[i][j] = '0' + cnt++;
		}	

		cout << "puzzle #" << cs << ":\nAcross\n";
		for(int i = 1, cnt = 1; i <= n; i++) {
			for(int j = 1; j <= m; j++) {
				if(mp[i][j] != '*' && mp[i][j - 1] == '*') {
					cout << " " << setw(2) << tab[i][j] - '0' << '.';
					for(int k = j; k <= m; k++) if(mp[i][k] != '*') cout << mp[i][k];
					else break;
					cout << '\n';
				}
			}
		}

		cout << "Down\n";
		for(int i = 1, cnt = 1; i <= n; i++) {
			for(int j = 1; j <= m; j++) {
				if(mp[i][j] != '*' && mp[i - 1][j] == '*') {
					cout << " " << setw(2) << tab[i][j] - '0' << '.';
					for(int k = i; k <= n; k++) if(mp[k][j] != '*') cout << mp[k][j];
					else break;
					cout << '\n';
				}
			}
		}
	}
}