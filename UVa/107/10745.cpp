#include <bits/stdc++.h>
#define plsAC ios_base::sync_with_stdio(0), cin.tie(0)
using namespace std;
int main(){
    plsAC;
    vector<vector<int>> cnt(15001, vector<int> (26, 0));
    vector<string> str;
    string s;
    int idx = 0;
    set<string> st, ans;

    while(cin >> s) str.emplace_back(s), idx++;

    sort(str.begin(), str.end(), [](string a, string b){
        return a.size() < b.size();
    });

    for(int i = 0; i < idx; i++) {
        for(auto j : str[i]) cnt[i][j - 'a']++;
    }

    for(int i = 0; i < idx; i++) {
        for(int j = i + 1; j < idx; j++) {
            bool baohan = true;

            for(int k = 0; k < 26; k++) if(cnt[i][k] > cnt[j][k])
                baohan = false;
            
            if(baohan) st.insert(str[i]);
        }
    }

    for(auto i : str) if(!st.count(i)) ans.insert(i);
    for(auto i : ans) cout << i << '\n';
}