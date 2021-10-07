#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	stringstream ss;
	int ans, cur, num;

	while (getline(cin, s)) {
		ss.clear(), ss.str(""), ans = 0, cur = 0;
		ss << s;

		while (getline(ss, s, ' ')) {
			num = stoi(s);
			if (cur + num < 0) cur = 0;
			else cur += num;

			ans = max(ans, cur);
		}

		cout << ans << '\n';
	}
}
