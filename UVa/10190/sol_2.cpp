#pragma GCC optimize("O3")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	IOS;
	int a, b;

	while (cin >> a >> b) {
		int t = ceil(log10(a) / log10(b));

		if (t > 0 && a == ceil(pow(b, t))) {
			while (a != 1) {
				cout << a << " ";
				a /= b;
			}
			cout << "1";
		}
		else cout << "Boring!";

		cout << "\n";
	}
}
