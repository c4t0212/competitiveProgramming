#define LL long long
#include <bits/stdc++.h>
using namespace std;

int main(){
	LL cs = 0, v1, v2, d1, d2;
	
	while(cin >> v1 >> d1 >> v2 >> d2 && v1 + d1 + v2 + d2){
		cout << "Case #" << ++cs << ": ";
		if(d1 * v2 < d2 * v1) cout << "You owe me a beer!\n";
		else cout << "No beer for the captain.\n";
		cout << "Avg. arrival time: ";
		
		LL totalD = d1 * v2 + d2 * v1, totalV = v1 * v2 * 2;
		LL gcd = __gcd(totalD, totalV);
		if(!(totalD % totalV)) cout << totalD / totalV << '\n';
		else cout << totalD / gcd << '/' << totalV / gcd << '\n';
	}
}
