#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int cnt = 0;

	while(getline(cin, s)) {
		for(int i = 0; i < s.size(); i++) {
			if(s[i] == '"') {
				cnt++;
				if(cnt & 1) cout << "``";
				else cout << "''";
			}
			else cout << s[i];
		}

		cout << '\n';
	}
}
