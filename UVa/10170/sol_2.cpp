#pragma GCC optimize("Ofast")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	IOS;
	long long s, d, ans;

	while(cin >> s >> d){
		ans = 0;
		for(long long jp = sqrt(LLONG_MAX) / 2; jp > 0; jp >>= 1){
			while((ans + jp + 1) * (2 * s + ans + jp) < 2 * d) ans += jp;
		}

		cout << (s >= d ? s : ans + s + 1) << '\n';
	}
}
