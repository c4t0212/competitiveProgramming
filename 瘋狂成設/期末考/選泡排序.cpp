#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	vector<int> nums;
	while(cin >> n) nums.push_back(n);
	
	for(int i = 0; i < nums.size(); i++) for(int j = i + 1; j < nums.size(); j++)
		if(nums[i] > nums[j]) swap(nums[i], nums[j]);
	
	for(auto i : nums) cout << i << '\n';
}
