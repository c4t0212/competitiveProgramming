#include<iostream>
using namespace std;
int main(){
	string s[] = {"鼠","牛","虎","兔","龍","蛇","馬","羊","猴","雞","狗","豬"};
	int n;
	cin >> n;
	cout << '\n' <<  s[(n - 4) % 12];
}
