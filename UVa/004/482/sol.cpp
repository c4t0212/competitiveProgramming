#include <bits/stdc++.h>
using namespace std;

int main() {
	int cs, fst, idx, mx;
	cin >> cs; cin.ignore();
	fst = cs;
	stringstream sa, sb;
	string ans[10000];
	string ipt;

	while(cs--) {
		if(fst != cs + 1) cout << '\n';
		
		sa.clear(), sb.clear();
		cin.ignore();
		mx = -1;
		getline(cin, ipt); sa << ipt;
		getline(cin, ipt); sb << ipt;
		while(sa >> idx) {
			sb >> ans[idx];
			mx = max(mx, idx);
		}

		for(int i = 1; i <= mx; i++) cout << ans[i] << '\n';
	}
}