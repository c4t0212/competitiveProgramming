#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(cin >> n){
        bool ans = false;
        vector<string> str(n);
        for(auto &i : str) cin >> i;

        sort(str.begin(), str.end());

        for(int i = 0; i < n - 1; i++) {
            if(str[i].size() < str[i + 1].size() && str[i + 1].substr(0, str[i].size()) == str[i])
                ans = true, i = 999999;
        }

        cout << (ans? "NO\n" : "YES\n");
    }
}
