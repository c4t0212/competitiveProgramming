#include <bits/stdc++.h>
using namespace std;

int main(){
	double a, b, ans = 0.0;
	cin >> a >> b;
	
	for(int i = 1; i < 1000; i++) {
		ans += (1 + i * a) * pow(b, i);
	}
	cout << ans;
}
