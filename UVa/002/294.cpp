#pragma GCC optimize("Ofast")
#define ll long long
#define letmeAC ios_base::sync_with_stdio(0), cin.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifdef plsAC
		freopen("ipt.in", "r", stdin);
		freopen("opt.out", "w", stdout);
	#endif
	letmeAC;
	ll t, a, b, mx, idx;
	cin >> t;
	
	while(t--) {
		cin >> a >> b;
		mx = -1; idx = 1;

		for(ll i = a; i <= b; i++) {
			int tmp = 0;
			for(ll d = 2; d * d <= i; d++)	if(!(i % d)) 
				tmp += 2 - (i / d == d);
			if(tmp > mx) mx = tmp, idx = i;
		}
		if(b == 1) mx = -1;
		cout << "Between " << a << " and " << b << ", " << idx << " has a maximum of " << mx + 2 << " divisors.\n";
	}
}