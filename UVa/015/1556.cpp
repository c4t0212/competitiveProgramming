#pragma GCC optimize("Ofast")
#define letmeAC ios_base::sync_with_stdio(0), cin.tie(0)
#include <bits/stdc++.h>
using namespace std;

struct trie{
	map<string, trie*> mp;
} *cur, *root;

void helper(trie* root, int lev) {
	for(auto &i : root->mp) {
		cout << string(lev, ' ') << i.first << '\n';
		helper(i.second, lev + 1);
	}
}

int main() {
	#ifdef plsAC
		freopen("ipt.in", "r", stdin);
		freopen("opt.out", "w", stdout);
	#endif
	letmeAC;
	int n;
	string s;
	stringstream ss;
		while(cin >> n){
		root = new trie;
		for(int i = 0; i < n; i++) {
			ss.clear();
			cin >> s; ss.str(s);
			cur = root;
			while(getline(ss, s, '\\')) {
				if(cur->mp[s] == nullptr) cur->mp[s] = new trie;
				cur = cur->mp[s];	
			}
		}

		helper(root, 0);
		cout << '\n';
	}
}