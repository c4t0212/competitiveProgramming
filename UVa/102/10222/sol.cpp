#include <bits/stdc++.h>
using namespace std;

int main() {
	string table = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./", s;

	while(getline(cin, s)) {
		for(int i = 0; i < s.size(); i++) 
			if(s[i] != ' ')
				cout << table[table.find(tolower(s[i])) - 2];
			else cout << ' ';
		cout << '\n';
	}

}