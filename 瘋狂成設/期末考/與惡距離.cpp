#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int n;
	cin >> s >> n;
	int ans = INT_MAX;
	
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '2') {
			for(int j = 0; j < s.size(); j++)
				if(s[j] == '0' + n) ans = min(ans, abs(i - j));
		}
	}
	
	if(ans == INT_MAX) cout << "inf\n";
	else cout << ans << '\n';
}
