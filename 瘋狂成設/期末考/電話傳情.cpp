#include <bits/stdc++.h>
using namespace std;

int main(){
	int table[] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};
	char c;
	
	while(cin >> c) if(isupper(c))  cout << table[c - 'A'];
	else cout << c;
	cout << '\n';
}
