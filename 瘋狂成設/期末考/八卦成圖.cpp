#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, spa;
	cin >> n; spa = n - 1;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < spa; j++) cout << "　";
		cout << "＊";
		if(i == 0) for(int j = 0; j < n - 2; j++) cout << "＊";
		else {
			for(int j = 0; j < n + 2 * (i - 1); j++) cout << "　";
		}
		spa--;
		cout << "＊" << '\n';
	}
	
	for(int i = 0; i < n - 2; i++) {
		cout << "＊";
		for(int j = 0; j < n + (n - 2) * 2; j++) cout << "　";
		cout << "＊" << '\n';
	}
	
	spa++;
	
	for(int i = n - 1; i >= 0; i--){
		for(int j = 0; j < spa; j++) cout << "　";
		cout << "＊";
		if(i == 0) for(int j = 0; j < n - 2; j++) cout << "＊";
		else {
			for(int j = 0; j < n + 2 * (i - 1); j++) cout << "　";
		}
		spa++;
		cout << "＊" << '\n';
	}
}
//"　"<-此為全形空白
//"＊"<-此為全形星形
