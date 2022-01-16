#include<iostream>
using namespace std;
int main(){
	int n, i50 = 0, i20 = 0, i10 = 0, i5 = 0, i1 = 0;
	cin >> n;
	
	i50 = n / 50; if(i50 > 100) i50 = 100; n -= 50 * i50;
	i20 = n / 20; if(i20 > 100) i20 = 100; n -= 20 * i20;
	i10 = n / 10; if(i10 > 100) i10 = 100; n -= 10 * i10;
	i5  = n /  5; if(i5  > 100) i5  = 100; n -=  5 * i5;
	i1  = n /  1; n -=  1 * i1;
	
	if(i50 > 100 || i20 > 100 || i10 > 100 || i5 > 100 || i1 > 100) cout << "無法兌換\n";
	else printf("50:%d\n20:%d\n10:%d\n5:%d\n1:%d\n", i50, i20, i10, i5, i1);
}
