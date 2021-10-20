#include <bits/stdc++.h>
using namespace std;

int main(){
	set<vector<int>> st;
	vector<int> vt, bp;
	int n, cal;
	cin >> n;

	while(cin >> n){
		st.clear(); vt.resize(n);
		for(auto &i : vt) cin >> i;

		while(!st.count(vt)){
      bp = vt, cal = 0;
			st.insert(vt);
			
			for(int i = 0; i < n; i++){
				cal += vt[i];
				vt[i] = abs(bp[i] - bp[(i + 1) % n]);
			}
		
			if(!cal) {cout << "ZERO\n";st.clear(); break;}	
		}

		if(st.count(vt)) cout << "LOOP\n";
	}
}
