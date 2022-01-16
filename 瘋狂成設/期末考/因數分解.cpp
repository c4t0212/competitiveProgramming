#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, isfirst = 1;
	cin >> n;
	
	for(int i = 2; i <= n; i++){
		while(n % i == 0) {
			n /= i;
			if(isfirst) cout << i, isfirst = 0;
			else cout << '*' << i;
		}
	}
	
	cout << '\n';
}
