#define LL long long
#include <bits/stdc++.h>
using namespace std;

LL fd_gcd(LL a, LL b){
	while((a %= b) && (b %= a));
	return a + b;
}

int main(){
	LL cs = 0, v1, v2, d1, d2;
	
	while(cin >> v1 >> d1 >> v2 >> d2 && v1 + d1 + v2 + d2){
		printf("Case #%d: ", ++cs);
		if(1.0 * d1 / v1 < 1.0 * d2 / v2) printf("You owe me a beer!\n");
		else printf("No beer for the captain.\n");
		printf("Avg. arrival time: ");
		
		LL totalD = d1 * v2 + d2 * v1, totalV = v1 * v2 * 2;
		LL gcd = fd_gcd(totalD, totalV);
		if(!(totalD % totalV)) printf("%lld\n", totalD / totalV);
		else printf("%lld/%lld\n", totalD / gcd, totalV / gcd);
	}
}
