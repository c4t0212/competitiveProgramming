#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, mx = INT_MIN, mn = INT_MAX;
	
	while(cin >> n){
		mx = max(mx, n);
		mn = min(mn, n);
	}
	cout << mx << '\n' << mn << '\n';
}
