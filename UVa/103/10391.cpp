#pragma GCC optimize("Ofast")
#define letmeAC ios_base::sync_with_stdio(0), cin.tie(0)
#include <bits/stdc++.h>
using namespace std;

struct trie{
	bool isend = false;
	map<char, trie*> mp;
} *root, *cur;

bool fd(string s) {
	cur = root;
	for(int i = 0; i < s.size(); i++) {
		if(!cur->mp[s[i]]) return false;
		cur = cur->mp[s[i]];
	}
	if(cur->isend) return true;
	return false;
}

int main() {
	#ifdef plsAC
		freopen("ipt.in", "r", stdin);
		freopen("opt.out", "w", stdout);
	#endif
	letmeAC;
	string s;
	set<string> ans;
	vector<string> str;
	root = new trie;

	while(cin >> s) {
		str.emplace_back(s);
		cur = root;
		for(int i = 0; i < s.size(); i++) {
			if(cur->mp[s[i]] == nullptr) cur->mp[s[i]] = new trie;
			cur = cur->mp[s[i]];
		}
		cur->isend = true;
	}

	for(int i = 0; i < str.size(); i++) {
		for(int j = 1; j < str[i].size(); j++) {
			if(fd(str[i].substr(0, j)) && fd(str[i].substr(j, str[i].size() - j)))
				ans.insert(str[i].substr(0, j) + str[i].substr(j, str[i].size() - j));
		}
	}

	for(auto i : ans) cout << i << '\n';
}