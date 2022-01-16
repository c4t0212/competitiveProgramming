#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, mp[101][101], ans[101][101];
	char c;
	cin >> m >> n;
	
	for(int i = 0; i < n; i++) for(int j = 0; j < m; j++)
		cin >> c, mp[i][j] = c - '0';
	
	for(int j = 0; j < m; j++){
		int c7 = 0, c8 = 0;
		for(int i = 0; i < n; i++){
			if(mp[i][j] == 7) c7++;
			if(mp[i][j] == 8) c8++;
		}
		
		int idx = 0;
		for(int k = 0; k < c7; k++) ans[k][j] = 7;
		for(int k = 0; k < n - c7 - c8; k++){
			while(mp[idx][j] == 7 || mp[idx][j] == 8) idx++;
			ans[k + c7][j] = mp[idx][j];
			idx++;
		}
		
		for(int k = 0; k < c8; k++) ans[n - 1 - k][j] = 8;
	}
		
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) cout << ans[i][j];
		cout << '\n';
	}
}
