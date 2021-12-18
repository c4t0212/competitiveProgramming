#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, cs = 1;
	char c;

	while(cin >> n >> m && n && m) {
		if(cs != 1) cout << '\n';
		cout << "Field #" << cs++ << ":\n";
		vector<vector<int>> mp(n + 2, vector<int>(m + 2, 0));	// 0->wall && ., -1->*

		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= m; j++) {
				cin >> c;
				if(c == '*') mp[i][j] = -1;
			}
		}

		int dx[] = { 1,  0, -1, 1, -1, 1, 0, -1};
		int dy[] = {-1, -1, -1, 0,  0, 1, 1,  1};

		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= m; j++) {
				if(mp[i][j] != -1) {
					int cnt = 0;

					for(int k = 0; k < 8; k++) {
						if(mp[i + dx[k]][j + dy[k]] == -1) cnt++;
					}

					cout << cnt;
				}
				else cout << "*";
			}
			cout << '\n';
		}
	}
}