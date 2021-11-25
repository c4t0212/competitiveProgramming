#include <iostream>
using namespace std;

int main(){
	int carry = 0, tmp;
	string a, b, ans = "";
	cin >> a >> b;
	
	if(a.size() < b.size()) a = string(b.size() - a.size(), '0') + a;
	else b = string(a.size() - b.size(), '0') + b;
	
	for(int i = 0; i < b.size(); i++){
		tmp = a[a.size() - i - 1] + b[b.size() - i - 1] + carry - 96;
		ans = char(tmp % 10 + 48) + ans;
		carry = tmp / 10;		
	}
	
	if(carry) ans = char(carry + 48) + ans;
	cout << ans;
}
