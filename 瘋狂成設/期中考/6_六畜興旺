#include <iostream>
using namespace std;
int main(){
	string a, b;
	string s[] = {"馬","牛","羊","豬","狗","雞","欺負"};
	cin >> a >> b;
	if(a == b) cout << "平手\n";
	else {
		int x, y;
		for(int i = 0; i < 6; i++) {
			if(s[i] == a) x = i;
			if(s[i] == b) y = i;
		}
		
		if(x < y) cout << s[x] << s[6] << s[y] << '\n';
		else cout << s[y] << s[6] << s[x] << '\n';
	}
}
