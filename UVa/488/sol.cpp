#pragma optimize("O3")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	IOS;
	int h, n, cs;
	cin >> cs;

	while (cs) {
		cs--;
		cin >> h >> n;
		for (int t = n; t >= 1; t--) {
			for (int i = 1; i <= h; i++) {
				for (int j = 0; j < i; j++) cout << i;
				cout << '\n';
			}

			for (int i = h - 1; i >= 1; i--) {
				for (int j = 0; j < i; j++) cout << i;
				cout << '\n';
			}

			if (t > 1 || cs) cout << '\n';
		}
	}
}
