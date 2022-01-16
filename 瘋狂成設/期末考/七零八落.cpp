#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int cnt = 0;
	cin >> s;
	
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '7') cout << '0';
		else if(s[i] == '8') cnt++;
		else cout << s[i];
	}
	
	cout << string(cnt, '8') << '\n';
}
