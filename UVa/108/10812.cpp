#pragma GCC optimize("Ofast")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	IOS;
	int sum, dif, a, b;
	cin >> a;

	while (cin >> sum >> dif) {
		a = (sum + dif) >> 1;
		b = (sum - dif) >> 1;

		if (a + b == sum && a - b == dif && b >= 0)
			cout << a << " " << b;
		else
			cout << "impossible";
		cout << '\n';
	}
}
