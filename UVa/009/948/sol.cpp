#pragma GCC optimize("Ofast")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	IOS;
	int n;
	cin >> n;

	vector<int> table(46);
	table[0] = table[1] = 1;

	for(int i = 2; i < 46;i++) 
		table[i] = table[i - 1] + table[i - 2];
	
	while(cin >> n) {
		cout << n << " = ";
		for(int i = 45; i > 0; i--)
			if(n >= table[i]) {
				for(; i > 0; i--) 
					if(n >= table[i]) n -= table[i], cout << 1;
					else cout << 0;
			}
		cout << " (fib)\n";
	}
	
}