#pragma GCC optimize("Ofast")
#define letmeAC ios_base::sync_with_stdio(0), cin.tie(0)
#include <bits/stdc++.h>
using namespace std;

vector<int> nums;
void ouo(vector<int> ans, vector<int> lis, int idx) {
	if(ans[idx] != -1) ouo(ans, lis, ans[idx]);
	cout << nums[idx] << '\n';
}

int main() {
	#ifdef plsAC
		freopen("ipt.in", "r", stdin);
		freopen("opt.out", "w", stdout);
	#endif
	letmeAC;

	int cs;
	string s;
	cin >> cs;
	cin.get(); cin.get();

	while(cs--) {
		nums.clear(); int len = 0, idx;
		while(getline(cin, s)){
			if(s == "") break;
			nums.emplace_back(stoi(s));
		}

		vector<int> ans(nums.size(), -1), lis(nums.size(), 1);

		for(int i = 0; i < lis.size(); i++) {
			for(int j = i + 1; j < lis.size(); j++) if(nums[i] < nums[j] && lis[i] + 1 > lis[j]) 
				ans[j] = i, lis[j] = lis[i] + 1;
			len = max(len, lis[i]);
			if(len == lis[i]) idx = i;
		}

		cout << "Max hits: " << len << '\n';
		ouo(ans, lis, idx);
		if(cs) cout << '\n';
	}
}