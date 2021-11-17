#pragma GCC optimize("Ofast")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	IOS;
	int n, r, num, people[10001];

	while(cin >> n >> r){
		bool opt = false;
		memset(people, 1, sizeof(people));
		
		for(int i = 0; i < r; i++) cin >> num, people[num - 1] = 0;
		for(int i = 0; i < n; i++){
			if(people[i]) cout << i + 1 << ' ', opt = true;
		}

		if(!opt) cout << "*";
		cout << '\n';
	}
}