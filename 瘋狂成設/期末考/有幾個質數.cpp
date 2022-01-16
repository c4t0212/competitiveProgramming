#include <bits/stdc++.h>
using namespace std;

bool ispri(int n){
	for(int i = 2; i * i <= n; i++) if(n % i == 0)
		return false;
	return true;
}

int main(){
	int n, x, ans = 0;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> x;
		ans += ispri(x);
	}
	cout << ans;
}
