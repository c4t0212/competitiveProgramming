#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, last, ans;
	
	while(cin >> a >> b && a + b){
		ans = last = 0;
		while(a + b){
			last = a % 10 + b % 10 + (last > 9);
			a /= 10, b /= 10;
			ans += (last > 9);
		}
		
		if(ans) cout << ans << (ans > 1 ? " carry operations.\n" : " carry operation.\n");
		else cout << "No carry operation.\n";
	}
} 
