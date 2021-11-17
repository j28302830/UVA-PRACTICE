#include <iostream>
using namespace std;
int GCD(int i,int j){
return j?GCD(j,i%j):i;
}
int main(){
int N;
while(cin>>N&&N!=0){
int sum=0;
for(int i=1;i<N;i++)
for(int j=i+1;j<=N;j++)
sum+=GCD(i,j);
cout<<sum<<endl;
}
return 0;
}

