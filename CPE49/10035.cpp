#include <iostream>
using namespace std;

int main(){
long long int n1,n2;
while(cin>>n1>>n2&&n1!=0||n2!=0){
    long long int ops[9]={0},op=0,sum;
  for(int i=0;n1!=0||n2!=0;i++){
    sum=n1%10+n2%10;
    if(i>0&&ops[i-1]==1)
    sum++;
    if(sum>9){
    op++;
    ops[i]=1;
    }
    n1/=10;
    n2/=10;

  }
  if(op==0)
    cout<<"No carry operation."<<endl;
  else if(op==1)
    cout<<op<<" carry operation."<<endl;
  else
    cout<<op<<" carry operations."<<endl;
}
return 0;

}
