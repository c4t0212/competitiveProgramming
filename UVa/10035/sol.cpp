#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a, b, c, last, ans;
	
	while(cin >> a >> b && a + b){
		ans = 0; last = 0;
		while(a || b){
			c = a % 10 + b % 10 + last;
			a /= 10, b /= 10;
			if(c > 9){
				ans++;
				last = 1;
			}
			else last = 0;
		}
		
		if(ans) cout << ans << (ans > 1 ? " carry operations.\n" : " carry operation.\n");
		else cout << "No carry operation.\n";
	}
} 
