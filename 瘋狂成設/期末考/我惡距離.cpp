#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int ans = INT_MAX;
	
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '2') {
			for(int j = 0; j < s.size(); j++)
				if(s[j] == '5') ans = min(ans, abs(i - j));
		}
	}
	
	cout << ans << '\n';
}
