#include <bits/stdc++.h>
using namespace std;
int cal(int num){
int i;
for(i=0;num;num/=10)
i+=num%10;
if(i==9)return 1;
return i%9?0:1+cal(i);
}
int main(){
string box;
while(cin>>box&&box!="0"){
int num=0,count=1;
reverse(box.begin(),box.end());
for(int i=0;i<box.length();i++)
num+=box[i]-48;
reverse(box.begin(),box.end());
if(num!=9)
count+=cal(num);

if(num%9==0)
cout<<box<<" is a multiple of 9 and has 9-degree "<<count<<".\n";
else
cout<<box<<" is not a multiple of 9.\n";
}
return 0;
}