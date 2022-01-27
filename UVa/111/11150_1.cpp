#pragma GCC optimize("Ofast")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	IOS;
	int n, ans;

	while (cin >> n) {
		ans = n;

		while (n > 1)
			n -= 2, ans++; //n -= 3, n++, ans++;

		cout << ans << '\n';
	}
}
