#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	
	for(int i = 0; i < (1 << s.size()); i++){
		for(int j = 0; j < s.size(); j++)
			if(i & (1 << j)) cout << s[j];
		cout << '\n';
	}
}
