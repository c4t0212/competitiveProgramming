#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string s1 = "甲乙丙丁戊己庚辛壬癸", s2 = "子丑寅卯辰巳午未申酉戌亥";
	cin >> n;
	cout << s1.substr(((n + 6) % 10) * 2, 2) << s2.substr(((n + 8) % 12) * 2, 2) << '\n';
}
