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
	long long n;

	while(cin >> n && n != -1) {
		for(long long i = 2; i * i <= n; i++) {
			while(!(n % i)) cout << "    " << i << '\n',n /= i;
		}
		if(n > 1) cout << "    " << n << '\n';
		cout << '\n';
	}
}