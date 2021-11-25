#include <iostream>
using namespace std;
int main(){
	int m7 = 0, m8 = 0;
	char ipt;
	
	while(cin >> ipt){
		m7 += ipt - '0';
		m8 += ipt - '0';
		m7 %= 7;
		m8 %= 8;
		m7 *= 10;
		m8 *= 10;
	}
	
	cout << m7 / 10 << " " << m8 / 10 << '\n';
}
