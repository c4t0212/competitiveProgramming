#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, k;
	
	while(cin >> n >> m && n + m){
		vector<int> nums(n, 0);
	
		for(int i = 0; i < n * m; i++) cin >> k, nums[i % n] += k;
	
		int mx = 0, ans;
		for(int i = 0; i < n; i++) if(nums[i] >= mx)
			ans = i, mx = nums[i];
		cout << ans + 1 << '\n';
	}
}
