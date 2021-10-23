#pragma GCC optimize("Ofast")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> hare(16), tort(16);

vector<int> helper(vector<int> array) {
	array[n] = array[0];
	for (int i = 0; i < n; i++) array[i] = abs(array[i] - array[i + 1]);
	return array;
}

int main() {
	IOS;
	cin >> n;

	while (cin >> n) {
		hare = vector<int>(16, 0), tort = hare;
		for (int i = 0; i < n; i++) cin >> hare[i], tort[i] = hare[i];

		do {
			if (!accumulate(tort.begin(), tort.end(), 0)|| !accumulate(hare.begin(), hare.end(), 0)) {
				cout << "ZERO\n";
				break;
			}

			tort = helper(tort);
			hare = helper(helper(hare));
		}while(hare != tort);

		if (hare == tort && accumulate(tort.begin(), tort.end(), 0)) cout << "LOOP\n";
	}
}
