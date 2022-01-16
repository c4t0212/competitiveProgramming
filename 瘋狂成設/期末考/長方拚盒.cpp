#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

int main(){
	pair<int,int> pt[6];
	for(auto &i : pt) {
		cin >> i.f >> i.s;
		if(i.f > i.s) swap(i.f, i.s);
	}
	
	sort(pt, pt + 6);
	
	if(pt[0] == pt[1] && pt[2] == pt[3] && pt[4] == pt[5] && pt[0].f == pt[2].f && pt[0].s == pt[4].f && pt[2].s == pt[4].s) cout << "YES\n";
	else cout << "NO\n";
}
/*
a b
a b

a c
a c

b c
b c
*/
