#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, d;
	cin >> n >> d >> m;
	
	cout << n / d << '.';
	n = n % d * 10;
	
	for(int i = 0; i < m; i++) cout << n / d, n = n % d * 10;
	cout << '\n';
}
