#pragma GCC optimize("Ofast")
#define letmeAC ios_base::sync_with_stdio(0), cin.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifdef plsAC
		freopen("ipt.in", "r", stdin);
		freopen("opt.out", "w", stdout);
	#endif
	letmeAC;
	int n, ans;

	while(cin >> n && n) {
		ans = 0;
		cout << n << " : ";
		for(int i = 2; i * i <= n; i++) {
			if(!(n % i)) {
				ans++;
				while(!(n % i)) n /= i;
			}
		}
		if(n > 1) ans++; 
		cout << ans << '\n';
	}
}