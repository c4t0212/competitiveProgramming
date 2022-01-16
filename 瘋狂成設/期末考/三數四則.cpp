#include <bits/stdc++.h>
using namespace std;

int cal(int a, int b, char opt){
	int ans;
	if(opt == '+') ans = a + b;
	if(opt == '-') ans = a - b;
	if(opt == '*') ans = a * b;
	if(opt == '/') ans = a / b;
	return ans;
}

int main(){
	int a, b, c;
	char x1, x2;
	cin >> a >> x1 >> b >> x2 >> c;
	if(x2 == '*' || x2 == '/') cout << cal(a, cal(b, c, x2), x1);
	else cout << cal(cal(a, b, x1), c, x2);
}
