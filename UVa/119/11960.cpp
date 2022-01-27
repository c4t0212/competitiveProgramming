#pragma GCC optimize("Ofast")
#define letmeAC ios_base::sync_with_stdio(0), cin.tie(0)
#include <bits/stdc++.h>
using namespace std;

int table[1000005] = {0};

int main() {
	#ifdef plsAC
		freopen("ipt.in", "r", stdin);
		freopen("opt.out", "w", stdout);
	#endif
	letmeAC;
	int t, n, mx = -1, idx;
	cin >> t;
	for(int i = 1; i <= 1000000; i++) for(int j = i << 1; j <= 1000000; j+=i)
		table[j]++;

	for(int i = 1; i <= 1000000; i++) {
		if(mx <= table[i]) mx = table[i], idx = i;
		table[i] = idx;
	}
	
	while(t--) {
		cin >> n;
		cout << table[n] << '\n';
	}
}