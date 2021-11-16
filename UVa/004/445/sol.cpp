#pragma optimize("O3")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	IOS;
	string s;
	char c;
	int ct = 0;

	while (cin.get(c)){
		if (c == '\n' || c == '!') cout << '\n';

		if (isdigit(c)) ct += c - '0';
		else {
			for (int j = 0; j < ct; j++) cout << (c == 'b' ? ' ' : c);
			ct = 0;
		}
	}
}
