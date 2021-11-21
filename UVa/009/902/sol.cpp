#pragma GCC optimize("Ofast")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>

using namespace std;

int main() {
	IOS;
	int n, rk;
	string s, ans;

	while(cin >> n >> s){
		map<string, int> mp;
		rk = 0;
		for(int i = 0; i < s.size() - n + 1; i++) mp[s.substr(i, n)]++;
		for(auto i : mp){
			if(i.second > rk) ans = i.first, rk =i.second;
		}

		cout << ans << '\n';
	}
}