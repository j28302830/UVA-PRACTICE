#include <iostream>
using namespace std;

int main(){
int cases,sum,dif;
    cin>>cases;
    while(cases--){
        cin>>sum>>dif;
        if((sum-dif)%2!=0||sum<dif)
        cout<<"impossible\n";
        else
        cout<<(sum-dif)/2+dif<<" "<<(sum-dif)/2<<endl;
    }
    return 0;
}