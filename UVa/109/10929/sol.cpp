#pragma GCC optimize("Ofast")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main() {
	IOS;
	string s;

	while(cin >> s && s != "0"){
		int odd = 0, even = 0;

		for(int i = 0; i < s.size(); i++){
			if(i & 1) odd += s[i] - '0';
			else even += s[i] - '0';
		}

		printf("%s", s.c_str());
		if(abs(odd - even) % 11) printf(" is not a multiple of 11.\n");
		else printf(" is a multiple of 11.\n"); 
	}
}