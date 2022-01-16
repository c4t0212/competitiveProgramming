#include <bits/stdc++.h>
using namespace std;

int main(){
	string a, b;
	cin >> a >> b;
	int cnt[10] = {0}, ha = 0, hb = 0;
	for(auto i : a) cnt[i - '0']++;
	
	for(int i = 0; i < 4; i++){
		if(a[i] == b[i]) ha++;
		else if(cnt[b[i] - '0']) hb++;
	}
	
	if(ha == 4) cout << "恭喜你，答對了!\n";
	else printf("%dA%dB\n", ha, hb);
}
