#include <bits/stdc++.h>
using namespace std;

int main(){
	string kb = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./", ipt;
	cin >> ipt, cin.get();
	
	while(getline(cin, ipt)){
		for(int i = 0; i < ipt.size(); i++) for(int j = 0; j < kb.size(); j++)
			if(ipt[i] == ' ') cout << ' ', j = kb.size();
			else if(tolower(ipt[i]) == kb[j]) cout << kb[j - 2], j = kb.size();
		cout << '\n';
	}
}
