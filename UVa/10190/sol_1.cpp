#pragma GCC optimize("O3")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

ostream& operator<<(ostream& os, vector<int> v) {
	for (auto& i : v) cout << i << " ";
	return os;
}

int main() {
	IOS;
	int a, b;
	vector<int> nums;

	while (cin >> a >> b) {
		nums.clear();

		while (a != 0 && b != 0 && b != 1 && a % b == 0) {
			nums.emplace_back(a);
			a /= b;
		}

		if (!nums.empty() && nums.back() == b)
			cout << nums << "1\n";
		else
			cout << "Boring!\n";
	}
}
