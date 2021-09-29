#pragma optimize("O3")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	IOS;
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
