#include <bits/stdc++.h>
using namespace std;

int main(){
    int cases,t,m,d,s[]{10,21,7,4,9,6,11,8,5,10,7,12};
    string day[]{"Monday", "Tuesday", "Wednesday", 
    "Thursday", "Friday", "Saturday", "Sunday"};
    cin>>cases;
    while(cases--){
        cin>>m>>d;
        d=(d-s[m-1])%7;
        cout<<day[d>=0?d:d+7]<<endl;
    }
    
    return 0;
}