#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  int xm= INT_MIN,ym= INT_MIN;
  int xM= INT_MAX,yM= INT_MAX;
  while(n--){
    int x0,y0,x1,y1;cin>>x0>>y0>>x1>>y1;
    xm = max(xm, x0);
    xM = min(xM, x1);
    ym = max(ym, y0);
    yM = min(yM, y1);
  }
  int w=xM-xm,h=yM-ym;
  if(w > 0 && h > 0)cout<<w*h<<endl;else cout<<0<<endl;
  return 0;
}
