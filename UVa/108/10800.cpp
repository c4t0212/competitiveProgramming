#define letmeAC ios_base::sync_with_stdio(0), cin.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifdef plsAC
		freopen("ipt.in", "r", stdin);
		freopen("opt.out", "w", stdout);
	#endif
	letmeAC;
	int cs, n, m, up;
	vector<vector<char>> mp;
	string s;
	cin >> cs; cs = 1;

	while(cin >> s) {
		cout << "Case #" << cs++ << ":\n";  
		mp.assign(55, vector<char>(55, ' '));
		n = m = 0, up = INT_MAX;
		for(int i = 0; i < s.size(); i++) {
			if(s[i] == 'F') n--;
			if(s[i] == 'R') n++;
			up = min(up, n);
		}
		n = abs(up);
		
		for(int i = 0; i < s.size(); i++) {
			m++;
			if(s[i] == 'R')  mp[n++][m] = '/';
			if(s[i] == 'C')  mp[n][m] = '_';
			if(s[i] == 'F')  mp[--n][m] = '\\';

		}

		for(int i = 53; i >= 0; i--) for(int j = 53; j >= 0; j--)
			if(mp[i][j] == ' ')	mp[i][j] = '\n';
			else break;

		for(int i = 53; i >= 0; i--) {
			if(mp[i][0] == '\n') continue;
			cout << '|';
			for(int j = 0; mp[i][j]!='\n'; j++)
				cout << mp[i][j];
			cout << '\n';
		}
		cout << "+" << string(s.size() + 2, '-') << "\n\n";
	}
}