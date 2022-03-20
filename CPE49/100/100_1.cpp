#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j;
    while(cin>>i>>j){
        int max=0;
        cout<<i<<" "<<j<<" ";
        if(i>j)
            i*=j, j=i/j, i/=j; //swap i&j, if i>j
        do{
            int c=1,n=i;
            while(n!=1&&c++)
                n=n%2==0?n/2:(3*n+1); //formula for 3n+1
            max=max<c?c:max; //record maximum cycle length
        }while(i++&&i<=j);
        cout<<max<<endl;
    }
    return 0;
}