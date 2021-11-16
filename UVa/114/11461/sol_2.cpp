#pragma optimize("O3")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	IOS;
	int a, b, sqta, sqtb;

	while (cin >> a >> b && a) {
		sqta = floor(sqrt(a)), sqtb = ceil(sqrt(b));

		if (sqta * sqta == a && sqtb * sqtb == b)
			cout << sqtb - sqta + 1;
		else if (sqta * sqta != a && sqtb * sqtb != b)
			cout << sqtb - sqta - 1;
		else
			cout << sqtb - sqta;
		cout << '\n';
	}
}
