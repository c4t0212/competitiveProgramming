#define LL long long
#include <bits/stdc++.h>
using namespace std;

int main(){
	LL cs = 0, v1, v2, d1, d2;
	
	while(cin >> v1 >> d1 >> v2 >> d2 && v1 + d1 + v2 + d2){
		printf("Case #%d: ", ++cs);
		if(d1 * v2 < d2 * v1) printf("You owe me a beer!\n");
		else printf("No beer for the captain.\n");
		printf("Avg. arrival time: ");
		
		LL totalD = d1 * v2 + d2 * v1, totalV = v1 * v2 * 2;
		LL gcd = __gcd(totalD, totalV);
		if(!(totalD % totalV)) printf("%lld\n", totalD / totalV);
		else printf("%lld/%lld\n", totalD / gcd, totalV / gcd);
	}
}
