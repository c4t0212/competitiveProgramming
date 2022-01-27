#pragma GCC optimize("Ofast")
#define letmeAC ios_base::sync_with_stdio(0), cin.tie(0)
#include <bits/stdc++.h>
using namespace std;

vector<int> lis, ans, nums;
void owo(int val, int cur) {
	if(val < 0) return;
	for(int i = cur; i >= 0; i--) {
		if(ans[i] == val) {
			//cout <<nums[i] << ' ' << i << ' ' << val << '\n';
			owo(val - 1, i);
			cout << nums[i] << '\n';
			return;
		}
	}
}

int main() {
	#ifdef plsAC
		freopen("ipt.in", "r", stdin);
		freopen("opt.out", "w", stdout);
	#endif
	letmeAC;
	int n, idx = 0, mx = -1;
	cin >> n;
	lis.emplace_back(n);
	nums.emplace_back(n);
	ans.emplace_back(0);

	while(cin >> n)	{
		nums.emplace_back(n);
		if(n > lis.back()) ans.emplace_back(lis.size()), lis.emplace_back(n);
		else {
			ans.emplace_back(lower_bound(lis.begin(), lis.end(), n) - lis.begin());
			*lower_bound(lis.begin(), lis.end(), n) = n;
		}
			//cout << n << ' ' << ans.back() << '\n';
	}

	for(int i = 0; i < ans.size(); i++)  if(mx < ans[i]) mx = ans[i];

	cout  << lis.size() << '\n' << '-' << '\n';
	owo(mx, ans.size() - 1);
	//cout<<mx << ' ' << ans.size() << '\n';

	//cout<<"\ncut\n";
	//for(int i = 0; i < ans.size(); i++) cout << nums[i] << ' ' << ans[i] << '\n';
	//for(auto i : nums) cout << i << ' ';
}