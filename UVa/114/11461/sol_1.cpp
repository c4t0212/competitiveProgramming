#pragma optimize("O3")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	IOS;
	int a, b, cnt, temp;

	while (cin >> a >> b && a) {
		cnt = 0;

		for (int i = a; i <= b; i++){
			temp = sqrt(i);
			if (temp * temp == i) cnt++;
		}

		cout << cnt << '\n';
	}
}
