#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int cnt = 3 - s.size() % 3;
	
	for(int i = 0; i < s.size(); i++){
		cout << s[i];
		cnt++;
		if(cnt % 3 == 0 && i != s.size() - 1) cout << ',';
	}
}
