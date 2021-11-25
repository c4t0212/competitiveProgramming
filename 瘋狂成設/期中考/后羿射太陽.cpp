#include<iostream>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("\n%d", !(a % b) ? b : a % b);
}
