#include <bits/stdc++.h>
using namespace std;
int main(){
	int cb = 0, cs = 0, cd = 0;
	char c;
	
	while(cin >> c){
		if(isupper(c))cb ++;
		if(islower(c))cs ++;
		if(isdigit(c))cd ++;
	}
	
	printf("%d %d %d\n", cb, cs, cd);
}
