#include <bits/stdc++.h>
using namespace std;

int main(){
	int cnt[13] = {0}, mx = 1;
	string pt = "A23456789TJQK", ans[5] = {"", "都不是", "一對或兩對", "葫蘆或三條", "鐵支"};
	char c;
	
	for(int i = 0; i < 5; i++){
		cin >> c >> c;
		cnt[pt.find(c)]++;
		mx = max(mx, cnt[pt.find(c)]);
	}
	cout << ans[mx] << '\n';
}
