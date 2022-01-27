#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	while (cin >> s) {
		if (s == "1" || s == "4" || s == "78") cout << "+";
		else if (s.substr(s.size() - 2, 2) == "35") cout << "-";
		else if (s[0] == '9' && s[s.size() - 1] == '4') cout << "*";
		else cout << "?";
		cout << "\n";
	}
}
