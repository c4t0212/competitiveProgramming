#pragma GCC optimize("O3")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	IOS;
	int n, m;

	while (cin >> n >> m) {
		int t = ceil(log10(n) / log10(m));

		if (t > 0 && n == ceil(pow(m, t))) {
			while (n != 1) {
				cout << n << " ";
				n /= m;
			}
			cout << "1";
		}
		else cout << "Boring!";

		cout << "\n";
	}
}
