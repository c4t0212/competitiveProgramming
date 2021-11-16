#pragma GCC optimize("Ofast")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>

using namespace std;

int main() {
	IOS;
	int h1, h2, m1, m2, time;

	while(cin >> h1 >> m1 >> h2 >> m2 && (h1 || h2 || m1 || m2)){
		time = h2 * 60 + m2 - h1 * 60 - m1;
		cout << (time > 0 ? time : time + 60 * 24) << '\n';
	}
}
