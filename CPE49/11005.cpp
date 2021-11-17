#include <bits/stdc++.h>
using namespace std;
string chg(string s,int base){
int dec,j=0;
string ans="";
dec=stoi(s);
do{
if(dec%base<10)
ans+=char('0'+dec%base);
else
ans+=char('A'+((dec%base)-10));
dec/=base;
}while(dec);
return ans;
}
int main(){
int p[36],cases,num;
string query,temp;
cin>>cases;
for(int i=1;i<=cases;i++){
cout<<"Case "<<i<<":"<<endl;
for(int j=0;j<36;j++)
cin>>p[j];
cin>>num;
while(num--){
int sum[35]{0},min{2147483647};
cin>>query;
cout<<"Cheapest base(s) for number "<<query<<":";
for(int k=2;k<=36;k++){
temp=chg(query,k);
for(int j=0;j<temp.size();j++)
sum[k-2]+=p[temp[j]>='A'?(temp[j]-'A'+10):(temp[j]-'0')];
if(sum[k-2]<min)
min=sum[k-2];
}
for(int j=0;j<35;j++)
if(sum[j]==min)
cout<<" "<<j+2;
cout<<endl;
}
if(i!=cases)
cout<<endl;
}

return 0;
}