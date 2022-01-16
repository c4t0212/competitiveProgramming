#include <bits/stdc++.h>
using namespace std;

int main(){
	string a, b;
	cin >> a >> b;
	if(a.size() < b.size()) swap(a, b);
	b = string(a.size() - b.size(), '0') + b;
	string ans = "";
	for(int i = a.size() - 1; i >= 0; i--) ans = char(a[i] + b[i] - '0') + ans;
	for(int i = ans.size() - 1; i > 0; i--) if(ans[i] >= '0' + 10)
		ans[i - 1]++, ans[i] -= 10;
	if(ans[0] >= '0' + 10) ans[0] -= 10, ans = '1' + ans;
	cout << ans;

}
