#include <bits/stdc++.h>
using namespace std;

int main(){
	char c;
	while(cin >> c){
		if(c == '"') cout << "'";
		else cout << c;
	}
}
