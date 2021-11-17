#include <bits/stdc++.h>
using namespace std;

int main(){
int Case,x1,x2,y1,y2,d;
cin>>Case;
for(int i=1;i<=Case;i++){
cin>>x1>>y1>>x2>>y2;
d=(x1+y1+x2+y2+1)*(x2+y2-x1-y1)/2;
d+=(x2-x1);
cout<<"Case "<<i<<": "<<d<<endl;
}
return 0;
}