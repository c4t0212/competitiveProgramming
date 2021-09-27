#pragma optimize("O3")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	IOS;
	int a, b, c, cnt, tar;

	while (cin >> a >> b >> c) {
		cnt = 0, tar = b;
		int nxt = 0;

		do {
			nxt = b * c + nxt;
			b = nxt % a;
			nxt /= a;
			cnt++;
		} while (nxt != 0 || b != tar);

		cout << cnt << "\n";
	}
}
