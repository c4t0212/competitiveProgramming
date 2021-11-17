#pragma GCC optimize("Ofast")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	IOS;
	int a, b, ans;

	while(cin >> a >> b && a + b){
		ans = 0;

		for(int i = ceil(sqrt(a)); i * i <= b; i++){
			ans++;
		}

		cout << ans << '\n';
	}
}