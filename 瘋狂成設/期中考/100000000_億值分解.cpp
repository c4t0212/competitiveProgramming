#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	printf("%d=", n);
	for(int i = 2; i < n; i++){
		while(!(n % i) && n / i > 1)
			printf("%d*", i), n /= i;
	}
	
	if(n >= 2) cout << n;
	cout << '\n';
}
