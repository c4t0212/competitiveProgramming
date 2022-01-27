#include <bits/stdc++.h>
using namespace std;

int helper(int n){
	int tmp = 0;
	while(n) tmp += n % 10, n /= 10;
	return tmp;
}

int main() {
	int n, table[100002] = {0};
	cin >> n;

	for(int i = 1; i < 100002; i++){
		int tmp = helper(i);
		if(!table[tmp + i]) table[tmp + i] = i;
	}

	while(cin >> n){
		cout << table[n] << '\n';
	}
}
