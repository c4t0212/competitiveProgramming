#include<iostream>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	cout << '\n' <<  (!(a % b) ? b : a % b);
}
