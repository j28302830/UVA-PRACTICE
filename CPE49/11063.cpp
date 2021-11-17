#include <iostream>
using namespace std;

int main(){
    int cases,time=0;
    while(cin>>cases){
    time++;
    int box[cases],b2[20001]{0};
    bool judge=true;
    for(int i=0;i<cases;i++){
    cin>>box[i];
    if((i>0&&box[i]<box[i-1])||box[i]<1)
    judge=false;
    }
    if(judge)
    for(int i=0;i<cases;i++)
    for(int j=i;j<cases;j++){
    b2[box[i]+box[j]]++;
    if(b2[box[i]+box[j]]>1)
    judge=false;
    }
    if(judge)
    cout<<"Case #"<<time<<": It is a B2-Sequence.\n\n";
    else
    cout<<"Case #"<<time<<": It is not a B2-Sequence.\n\n";
    }
    return 0;
}