#pragma GCC optimize("Ofast")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>

using namespace std;

int main() {
	IOS;
	string week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int m, d, count;
	int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 30};
	cin >> m;

	while(cin >> m >> d){
		count = 4;

		for(int i = 0; i < m - 1; i++) count += days[i];
	
		cout << week[(count + d) % 7] << '\n';
	}
}
