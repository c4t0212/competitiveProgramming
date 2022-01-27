#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, ans;
    cin >> t;

    for (int cs = 1; cs <= t; cs++) {
        ans = 0;
        cin >> a >> b;
      
        for (int i = a; i <= b; i++)
            if(i & 1) ans += i;
      
        cout << "Case " << cs << ": " << ans << "\n";
    }
}
