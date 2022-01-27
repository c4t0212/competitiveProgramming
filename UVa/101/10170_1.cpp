#include <bits/stdc++.h>
using namespace std;

int main() {
	long long s, d;

	while(cin >> s >> d){
		for(long long i = 1; i <= d;){
			i += s;
			s++;
		}

		cout << s - 1 << '\n';
	}
}
