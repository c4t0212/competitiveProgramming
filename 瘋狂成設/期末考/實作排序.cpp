#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> nums(n);
	for(auto &i : nums) cin >> i;
	
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(nums[i] > nums[j]) swap(nums[i], nums[j]);
		}
	}
	
	for(auto i : nums) cout << i << ' ';
	cout << '\n';

	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(nums[i] < nums[j]) swap(nums[i], nums[j]);
		}
	}
	
	for(auto i : nums) cout << i << ' ';
	cout << '\n';
}
