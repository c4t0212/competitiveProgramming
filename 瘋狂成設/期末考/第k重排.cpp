#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, cnt, cur = 1;
	cin >> n >> cnt;
	vector<int> nums;
	for(int i = 1; i <= n; i++) nums.push_back(i), cur *= i;
	cur /= n;
	cnt--;
	
	
	while(nums.size() > 1){
		cout << nums[cnt / cur] << ' ';
		nums.erase(nums.begin() + cnt / cur);
		n--;
		cnt = cnt % cur;
		cur /= n;
		
	}
	cout << nums.back() << ' ';
}
