#include <bits/stdc++.h>
using namespace std;
int main(){
	string s, tmp;
	int cnt = 0;
	vector<string> ans;
	
	while(getline(cin, s)){
		tmp = "";
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '<' && cnt < 6) {
				cnt++;
				int j = i;
				while(j < s.size() && s[j] != '>') j++;
				i = j;			
			}
			else tmp += s[i];
		}
		ans.push_back(tmp);
	}
	
	cout << ans[0];
	
	for(int i = 1; i < ans.size(); i++) {
		cout << '\n' << ans[i];
	}
	
	if(ans.size() > 1) cout << '\n';
}
