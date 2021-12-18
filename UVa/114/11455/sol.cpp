#include <bits/stdc++.h>
using namespace std;

int main() {
	int len[4];
	cin >> len[0];

	while(cin >> len[0] >> len[1] >> len[2] >> len[3]) {
		sort(len, len + 4);

		if(len[0] == len[3]) cout << "square\n";
		else if(len[0] == len[1] && len[2] == len[3]) cout << "rectangle\n";
		else if(len[0] + len[1] + len[2] > len[3]) cout << "quadrangle\n";
		else cout << "banana\n";
	}
}