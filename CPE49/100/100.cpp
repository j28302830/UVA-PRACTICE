#include <iostream>
using namespace std;
int formula(int n){
    int ct=1;
    while(n!=1&&ct++)
        n=(n%2==0?n/2:(3*n+1));
    return ct;
}

int getmax(int n1,int n2){
    int max=0;
    if(n1>n2)
        return getmax(n2,n1);
    for(int i=n1;i<=n2;i++)
        max=formula(i)>max?formula(i):max;
    return max;
}

int main(){
    int n1,n2;
    while(cin>>n1>>n2)
        cout<<n1<<" "<<n2<<" "<<getmax(n1,n2)<<endl;
    return 0;
}
