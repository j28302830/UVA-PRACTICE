#include <bits/stdc++.h>
using namespace std;
#define ll long long

void change(ll n){
    if(n/10000000){
        change(n/10000000);
        cout<<" kuti";
        n%=10000000;
    }

    if(n/100000){  
        cout<<" "<<n/100000<<" lakh";
        n%=100000;
    }

    if(n/1000){
        cout<<" "<<n/1000<<" hajar";
        n%=1000;
    }

    if(n/100){
        cout<<" "<<n/100<<" shata";
        n%=100;
    }
    
    if(n>0)
        cout<<" "<<n;
    
}

int main(){
    ll  num;
    int i=1;
    while(cin>>num){
        cout<<setw(4)<<i++<<".";
        if(num!=0)
            change(num);
        else 
            cout<<" 0";
        cout<<endl;
    }
    
    return 0;
}