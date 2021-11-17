#include <bits/stdc++.h>
using namespace std;

int main(){
int cases,player,ith;
double p;
cin>>cases;
while(cases--){
double sum=0,old=0;
int i=0;
cin>>player>>p>>ith;
while(1){
sum+=(p*pow(1-p,ith-1)*pow(1-p,player*i++));
if(sum==old)
break;
old=sum;
}
cout<<fixed<<setprecision(4)<<sum<<endl;
}
return 0;
}