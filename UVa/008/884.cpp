#pragma GCC optimize("Ofast")
#define ll long long
#define letmeAC ios_base::sync_with_stdio(0), cin.tie(0)
#include <bits/stdc++.h>
using namespace std;

vector<ll> table(1000005, 0), pri(1000005, 1);

int main() {
	#ifdef plsAC
		freopen("ipt.in", "r", stdin);
		freopen("opt.out", "w", stdout);
	#endif
	letmeAC;
	int n;
	
	for(ll i = 2; i <= 1000001; i++) {
		if(pri[i]) {
			for(ll j = i; j <= 1000001; j *= i) for(ll k = j; k <= 1000001; k += j)
				table[k]++, pri[k] = 0;
		}
	}

	for(int i = 2; i <= 1000000; i++) {
		if(!table[i]) table[i]++;
		table[i] += table[i - 1];
	}
	
	while(cin >> n) {
		cout << table[n] << '\n';
	}
}