#pragma GCC optimize("Ofast")
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#include <bits/stdc++.h>
using namespace std;

int main(){
	IOS;
    int n, ct;
    
    while(cin >> n && n){
        string s = "";ct = 0;
        
        while(n > 0){
            if(n & 1) s = "1" + s, ct++;
            else s = "0" + s;
            n >>= 1;  
        }
        
        cout << "The parity of "<< s << " is " << ct << " (mod 2).\n";
    }
}
