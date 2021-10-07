#include <bits/stdc++.h>
using namespace std;

ostream& operator<<(ostream& os, vector<int> v) {
	for (auto& i : v) cout << i << " ";
	return os;
}

int main() {
	int n, m;
	vector<int> nums;

	while (cin >> n >> m) {
		nums.clear();

		while (n != 0 && m != 0 && m != 1 && n % m == 0) {
			nums.emplace_back(n);
			n /= m;
		}

		if (!nums.empty() && nums.back() == m)
			cout << nums << "1\n";
		else
			cout << "Boring!\n";
	}
}
