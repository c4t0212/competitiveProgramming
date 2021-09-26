#pragma GCC optimize("Ofast")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>

using namespace std;

int main() {
	IOS;
	long long a, b;

	while (cin >> a >> b)
		cout << abs(b - a) << "\n";
}
