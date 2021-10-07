#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, up, lw;
	string s;

	while (1) {
		up = 11, lw = -1;
		while (cin >> n && n) {
			cin.get();
			getline(cin, s);
			if (s == "right on") {
				if (n > lw && n < up) cout << "Stan may be honest\n";
				else cout << "Stan is dishonest\n";
				break;
			}
			else if (s == "too high") up = min(up, n);
			else if (s == "too low") lw = max(lw, n);
		} 

		if (n == 0) break;
	}
}
