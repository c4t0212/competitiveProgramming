#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i + 2; j++)
			cout << string(n + 1 - j, ' ') << string(j * 2 + 1, '*') << '\n';
	}
	
	cout << string(n + 1, ' ') << '*' << '\n' << string(n - 1, ' ') << "*****\n";
}
