#pragma GCC optimize("Ofast")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

struct trie {
	bool tail = true;
	trie* nxt[10] = { NULL };
	map<int, trie*> mp;
};

int main() {
	IOS;
	int n;
	string s;
	cin >> n;

	while (cin >> n) {
		bool ans = false;
		trie *root = new trie, *cur = root;
		for (int i = 0; i < n; i++) {
			cin >> s;
			cur = root;
			for (int j = 0; j < s.size(); j++) {
				if (cur->nxt[s[j] - 48] == NULL) cur->nxt[s[j] - 48] = new trie;
				else if (cur->nxt[s[j] - 48]->tail || j == s.size() - 1)
					ans = true;
				cur->tail = false;
				cur = cur->nxt[s[j] - 48];
			}
		}

		cout << (ans ? "NO\n" : "YES\n");
	}
}
