#include <bits/stdc++.h>
using namespace std;

int main() {
	long long s, d, ans;

	while(cin >> s >> d){
		long long L = 0, R = sqrt(LLONG_MAX) / 2, mid;

		while(R >= L){
			mid = L + R >> 1;

			if((mid + 1) * (2 * s + mid) >= 2 * d) R = mid - 1;
			else L = mid + 1;
		}

		cout << (s >= d ? s : s + L) << '\n';
	}
}
