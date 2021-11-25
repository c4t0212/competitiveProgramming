#include<iostream>
using namespace std;
int main(){
	for(int i = 0; i < 52; i++) {
		if(i < 26) cout << char(i + 65);
		else cout << char (90 - i + 26);
	}
}
