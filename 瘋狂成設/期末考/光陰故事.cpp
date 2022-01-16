#include <bits/stdc++.h>
using namespace std;
int main(){
	int hh, mm, ss;
	cin >> ss;
	mm = ss / 60; ss %= 60;
	hh = mm / 60; mm %= 60;
	cout << setfill('0') << setw(2) << hh << ':' \
		 << setfill('0') << setw(2) << mm << ':' \
		 << setfill('0') << setw(2) << ss << '\n';
}
