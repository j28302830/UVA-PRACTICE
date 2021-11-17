#include <iostream>

using namespace std;
bool isSquare(int a,int b[]){
 for(int i=1;i<317;i++)
    if(a==b[i])
    return true;

    return false;
}
int main(){
int a,b,setB[317]={0},time;
for(int i=1;i<317;i++)
    setB[i]=i*i;
    while(cin>>a>>b&&a!=0&&b!=0){
            time=0;
        while(a<=b){
            if(isSquare(a,setB))
            time++;
        a++;
        }
        cout<<time<<endl;
    }
return 0;
}
