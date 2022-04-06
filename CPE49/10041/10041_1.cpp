#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases, r;
    cin>>cases;
    while(cases--&&cin>>r){
        int s[r], m=r/2, d=0;
        for(int i=0;i<r;i++)
            cin>>s[i];
        sort(s,s+r);
        for(int i=0;i<r;i++)
            d+=abs(s[i]-s[m]);
        cout<<d<<endl;
    }
    return 0;
}