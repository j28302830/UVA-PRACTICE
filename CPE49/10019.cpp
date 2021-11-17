#include <bits/stdc++.h>
using namespace std;
int count(int n){
return n!=0?((n%2?1:0)+count(n/2)):0;
}
int trans(int num){
return num!=0?(num%10+trans(num/10)*16):0;
}
int main(){
int cases,num;
cin>>cases;
while(cases--&&cin>>num)
cout<<count(num)<<" "<<count(trans(num))<<endl;
return 0;   
}