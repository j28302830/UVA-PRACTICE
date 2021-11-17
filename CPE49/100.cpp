#include <iostream>
using namespace std;
int formula(int n){
    int ct=1;
while(n!=1){
if(n%2==0)
n=n/2;
else
n=3*n+1;

ct++;
}
return ct;
}

int getmax(int n1,int n2){
int big,max=0,small;
if(n1>n2){big=n1;small=n2;}
else{big=n2;small=n1;}

for(int i=small;i<=big;i++)
    if(formula(i)>max)
    max=formula(i);
return max;
}

int main(){
int n1,n2;
while(cin>>n1>>n2)
cout<<n1<<" "<<n2<<" "<<getmax(n1,n2)<<endl;

return 0;

}
