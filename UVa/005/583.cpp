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
	ll n;
	vector<ll> ans;

	while(cin >> n && n) {
		ans.clear();
		cout << n << " = ";
		if(n < 0) n = -n, ans.push_back(-1);
		for(ll i = 2; i * i <= n; i++) {
			while(!(n % i)) ans.push_back(i), n /= i;
		}
		if(n > 1 || ans.empty()) ans.push_back(n);
		cout << ans[0];
		for(int i = 1; i < ans.size(); i++) cout << " x " << ans[i];
		cout << '\n';
	}
}