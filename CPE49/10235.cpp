#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num){
if(num>3&&num%2==0)    
return false;
else if(num<4)
return true;

for(int i=3;i<=num;i+=2)
if(num/i!=1&&num%i==0)return false;

return true;
}
int main(){

int num;
string temp;
while(cin>>num){
cout<<num<<" is ";
if(isPrime(num)){
temp=to_string(num);
reverse(temp.begin(),temp.end());
if(num==stoi(temp))
cout<<"prime.\n";
else
cout<<(isPrime(stoi(temp))?"emirp.\n":"prime.\n");
}
else
cout<<"not prime.\n";
}

return 0;
}