#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	cout << n << '=';
	for(int i = 2; i < n; i++){
		while(!(n % i) && n / i > 1)
			cout << i << '*', n /= i;
	}
	
	if(n >= 2) cout << n;
	cout << '\n';
}
