#include <bits/stdc++.h>
using namespace std;

int main(){
double fx,fy,x[4],y[4];
while(cin>>x[0]>>y[0]){
fx=x[0];
fy=y[0];
for(int i=1;i<4;i++){
cin>>x[i]>>y[i];
fx+=x[i];
fy+=y[i];
}    
for(int i=0;i<4;i++){
for(int j=i+1;j<4;j++)
if(x[i]==x[j]&&y[i]==y[j]){
fx-=3*x[i];
fy-=3*y[i];
printf("%.3f %.3f\n",fx,fy);
}    
}
}
return 0;
}