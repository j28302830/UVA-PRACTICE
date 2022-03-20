#include <bits/stdc++.h>
using namespace std;

int main(){
    int c,s;
        cin>>c;
    while(c--){
        cin>>s;
        int std[s],max=-150000;
        for(int i=0;i<s;i++)
            cin>>std[i];
        for(int i=0;i<s-1;i++)
            for(int j=i+1;j<s;j++)b
                if((std[i]-std[j])>max)
                 max=(std[i]-std[j]);
        cout<<max<<endl;
    }
    return 0;
}