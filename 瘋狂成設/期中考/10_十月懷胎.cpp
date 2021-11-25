#include <iostream>
using namespace std;

int main(){
	int yy, mm, dd;
	int day[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	cin >> yy >> mm >> dd;
	dd += 280;
	
	while(dd > day[mm - 1]) {
		dd -= day[mm - 1], mm++;
		if(mm == 2 && ((yy % 400) || !(yy % 1000)) && (!(yy % 4))) dd--; 
		if(mm == 13) mm = 1, yy++;
	}
	
	dd += (mm == 2 && ((yy % 400) || !(yy % 1000)) && (!(yy % 4)));
	printf("%d %d %d\n", yy, mm, dd);
}
