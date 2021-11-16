#pragma GCC optimize("Ofast")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	IOS;
	int n, ans[80];
	ans[0] = 1;
	ans[1] = ans[2] = 2;
	
	for(int i = 3; i < 80; i++) ans[i] = ans[i - 2] + ans[i - 3];

	while(cin >> n) cout << ans[n - 1] << '\n';
}
