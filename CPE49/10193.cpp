#include <bits/stdc++.h>
using namespace std;
long btod(string s){
long d=0;
if(s[0]==0)
return 1;
for(int i=0;i<s.length();i++)
d+=(s[i]-'0')*pow(2,s.length()-i-1);
return d;              
}
long gcd(long a, long b){
while ((a%=b) && (b%=a));
return a+b;
}
int main(){
int Case;
long L;
string S1,S2;
cin>>Case;
for(int i=0;i<Case;i++){
cout<<"Pair #"<<i+1;
cin>>S1>>S2;
L=gcd(btod(S1),btod(S2));
if(L!=1)
cout<<": All you need is love!\n";
else
cout<<": Love is not all you need!\n";
}
return 0;
}