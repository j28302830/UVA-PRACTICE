#include <bits/stdc++.h>
using namespace std;
int fib(int i){
return i==1||i==2?1:(fib(i-1)+fib(i-2));
}
int main(){
int cases,v,fibn[39];
for(int i=2;i<=40;i++)
fibn[i-2]=fib(i);


cin>>cases;
while (cases--){
bool c=false;
int ans[39]{0};
cin>>v;
cout<<v<<" = ";
while(v!=0)
for(int i=0;i<39;i++)
if(fibn[i]>v){
ans[i-1]++;
v-=fibn[i-1];
break;    
}
else if(fibn[i]==v){
ans[i]++;
v-=fibn[i];
break;    
}

for(int i=38;i>-1;i--){
if(ans[i]==1&&!c){
cout<<1;
c=true;
}
else if(c)
cout<<ans[i];
}
cout<<" (fib)"<<endl;
}

return 0;
}