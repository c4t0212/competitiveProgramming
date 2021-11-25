#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c, mn, mx, md;
	cin >> a >> b >> c;
	mn = min({a, b, c});
	mx = max({a, b, c});
	md = mn ^ a ^ b ^ c ^ mx;
	cout << mn << " " << md << " " << mx << '\n';
}
