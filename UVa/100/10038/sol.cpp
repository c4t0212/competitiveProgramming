#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;

	while(cin >> n) {
		vector<int> cnt(n, 0);
		int pre, last;
		cin >> pre;

		for(int i = 1; i < n; i++) {
			cin >> last;
			if(abs(last - pre) <= n - 1) cnt[abs(last - pre)]++;
			pre = last;
		}

		bool check = true;

		for(int i = 1; i <= n - 1; i++) {
			if(cnt[i] != 1) check = false;
		}

		if(check) cout << "Jolly\n";
		else cout << "Not jolly\n";
	}
}