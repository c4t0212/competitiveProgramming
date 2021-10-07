#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, cal;
	vector<pair<int, int>> pt;

	while (cin >> n && n) {
		pt.resize(n << 1);

		for (auto& i : pt) cin >> i.first >> i.second;

		for (int i = -500; i <= 500; i++) for (int j = -500; j <= 500; j++) {
			int pos = 0, neg = 0;

			for (auto t : pt) {
				cal = t.first * i + t.second * j;

				if (cal > 0) pos++;
				else if (cal < 0) neg++;
				else neg = -1;
			}

			if (pos == neg) cout << i << " " << j << '\n', i = 9999, j = 9999;
			//若線兩邊的相等則直接輸出，並更改迴圈i,j的值，我就是懶的用break跟flag啦
		}
	}
}
