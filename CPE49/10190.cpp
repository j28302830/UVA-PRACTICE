#include <bits/stdc++.h>
using namespace std;

int main(){
int n,m,temp;
while(cin>>n>>m){
temp=n;
while(m>1&&n>1){
if(temp%m!=0)
break;
temp/=m;
}
if(temp!=1||n<=temp)
cout<<"Boring!\n";
else{
while(n){
cout<<n;
n/=m;
if(n!=0)
cout<<" ";
else 
cout<<endl;
}    
}
}
return 0;
}