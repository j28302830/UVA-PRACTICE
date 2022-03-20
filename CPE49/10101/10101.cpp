#include <bits/stdc++.h>
using namespace std;
#define ll long long
void chg(ll n){
    if(n/10000000){
    chg(n/10000000);
    cout<<" kuti";
    n%=10000000;
    }
    if(n/100000){
    chg(n/100000);    
    cout<<" lakh";
    n%=100000;
    }
    if(n/1000){
    chg(n/1000);    
    cout<<" hajar";
    n%=1000;
    }
    if(n/100){
    chg(n/100);
    cout<<" shata";
    n%=100;
    }
    if(n)
    cout<<" "<<n;
}
int main(){
int count=0;
ll num;
while(cin>>num){
    cout<<setw(4)<<++count<<".";
   if(num)
   chg(num);
   else 
   cout<<" 0";
   cout<<endl; 
}
return 0;
}