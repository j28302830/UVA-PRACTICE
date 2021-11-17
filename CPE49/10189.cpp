#include <bits/stdc++.h>
using namespace std;
int check(string field[],int n,int m,int line){
int num=0;
for(int i=n!=0?n-1:n;i<n+2&&i<line;i++)
for(int j=m!=0?m-1:m;j<m+2&&j<field[i].size();j++)
if(field[i][j]=='*')
num++;
return num;
}
int main(){
int n,m,time=0;
while(cin>>n>>m&&n!=0&&m!=0){
string field[n];
time++;
if(time!=1)
cout<<endl;
cout<<"Field #"<<time<<":\n";
for(int i=0;i<n;i++)
cin>>field[i];
for(int i=0;i<n;i++){
for(int j=0;j<m;j++)
if(field[i][j]=='*')
cout<<"*";
else
cout<<check(field,i,j,n);
cout<<endl;
}
}
return 0;
}