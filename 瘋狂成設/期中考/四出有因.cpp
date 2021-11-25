#include <iostream>
using namespace std;
int gcd(int a, int b) {
	while((a %= b) && (b %= a));
	return a + b;
}

int main(){
	int a, b;
	cin >> a;
	while(cin >> b)
		a = gcd(a, b);
	cout << a << '\n';
}
