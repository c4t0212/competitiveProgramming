#pragma GCC optimize("O3")
#define letmeAC ios_base::sync_with_stdio(0), cin.tie(0)
#include <bits/stdc++.h>
using namespace std;

struct node {
	long long cnt;
	map<char, node*> mp;
	node() : cnt(0) {}
}*root, *cur;

int main() {
	letmeAC;
	int n, cs = 1;
	string s;

	while(cin >> n && n) {
		root = new node();
		long long ans = 0;
		for(int i = 0; i < n; i++) {
			cin >> s; s += "#";
			cur = root;
			cur->cnt++;
			for(int j = 0; j < s.size(); j++) {
				if(cur->mp[s[j]] == nullptr) {
					cur->mp[s[j]] = new node();
					if(cur->cnt > 0) ans += cur->cnt - 1;
				}
				else ans += (cur->mp[s[j]]->cnt) * 2 + cur->cnt - cur->mp[s[j]]->cnt - 1;
				cur = cur->mp[s[j]];
				cur->cnt++;
			}
		}
		cout << "Case " <<  cs++ << ": " << ans << '\n';
		
	}
}