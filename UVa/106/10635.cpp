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
	int n, p, q, cs = 0, num;
	cin >> n;

	while(cin >> n >> p >> q) {
		n *= n;
		vector<int> buk(n + 1, 0), lis;
		for(int i = 0; i <= p; i++) cin >> num, buk[num] = i;

		for(int i = 0; i <= q; i++) {
			cin >> num;
			num = buk[num];
			if(lis.empty() || num > lis.back()) lis.emplace_back(num);
			else *lower_bound(lis.begin(), lis.end(), num) = num;
		}
		cout << "Case " << ++cs << ": " << lis.size() << '\n';
	}
}