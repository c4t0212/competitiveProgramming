#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;

	while(cin >> n && n){
		bitset<32> bt(n);
		cout << "The parity of ";

		for(int i = 31; i >= 0; i--) if(bt[i] != 0){
			for(; i >= 0; i--) cout << bt[i];
		}
		cout << " is " << bt.count() <<" (mod 2).\n";
	}
}
