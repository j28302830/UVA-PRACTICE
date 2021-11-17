#include<bits/stdc++.h>
using namespace std;

int main(){
int num;
while(cin>>num&&num!=0){
int n=0;
string binary="";
for(int i=0;num!=0;i++){ 
if(num%2==1)n++;
binary+=to_string(num%2);
num/=2;
}
reverse(binary.begin(),binary.end());
cout<<"The parity of "<<binary<<" is "<<n<<" (mod 2).\n";
}
return 0;
}