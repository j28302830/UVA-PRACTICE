#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(cin>>n>>m){
        int value[n],rem[n],out;
        cout<<n<<" "<<m<<endl;
        if(n==0&&m==0)
            break;
        for(int i=0;i<n;i++){
            cin>>value[i];
            rem[i]=value[i]%m;
        }
    
        for(int i=0;i<n;i++){
            out=i;
            for(int j=i+1;j<n;j++)          
                if((rem[out])>(rem[j]))
                    out=j;
                else if(rem[out]==rem[j]){
                    bool x=(value[out]%2!=0),y=(value[out]<value[j]); 
                    if(!x&&value[j]%2!=0)
                        out=j;                 
                    else if((value[out]+value[j])%2==0) 
                        out=(x==y)?j:out;
                    
                }
            int tmp;
            tmp=value[i];
            value[i]=value[out];
            value[out]=tmp;
            tmp=rem[i];
            rem[i]=rem[out];
            rem[out]=tmp;
            cout<<value[i]<<endl;
        }   
    }
    return 0;
}