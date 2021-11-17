#include <bits/stdc++.h>
using namespace std;

int main(){
int n,sum,emp=0;
while(cin>>n){
    sum=n;
while(n>2){
    sum+=n/3;
    emp=n%3;
    n=n/3+emp;
}
if(n==2)sum++;
cout<<sum<<endl;
}
return 0;
}