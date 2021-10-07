#include <bits/stdc++.h>
using namespace std;

bool fd(char a, string table){
	for(int i = 0; i < 5; i++) if(a == table[i]) 
		return true;
	return false;
}

int main() {
	int n, m, len;
	string s1, s2;
	cin >> n >> m;

	map<string,string> mp;

	for(int i = 0; i < n; i++){
		cin >> s1 >> s2;
		mp[s1] = s2;
	}

	for(int i = 0; i < m; i++){
		cin >> s1;len = s1.size();

		if(mp.count(s1)) cout << mp[s1];
		else if(!(fd(s1[len - 2], "aeiou")) && s1[len - 1] == 'y')
			cout << s1.substr(0, len - 1) + "ies";
		else if(fd(s1[len - 1], "osx") || s1.substr(len - 2, 2) == "sh" || s1.substr(len - 2, 2) == "ch")
			cout << s1 << "es";
		else
			cout << s1 << "s";
		cout << '\n';
	}
}
