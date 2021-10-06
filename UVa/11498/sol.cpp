#pragma optimize("O3")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	IOS;
	int cs, midX, midY, x, y;

	while (cin >> cs && cs) {
		cin >> midX >> midY;

		for (int i = 0; i < cs; i++) {
			cin >> x >> y;
			x -= midX, y -= midY;

			if (x == 0 || y == 0) cout << "divisa";
			else
				cout << (y > 0 ? "N" : "S") << (x > 0 ? "E" : "O");
			cout << '\n';
		}
	}
}
