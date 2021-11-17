#include <iostream>
using namespace std;

int main(){
int num,snum,sf,t;
bool j,f;
while(cin>>num&&num!=0){
j=true,f=true;
t=num;
int chk[num+1]={0};
while(t--){
if(f){f=false;cin>>sf;}
else{
cin>>snum;
if(abs(sf-snum)>num-1||abs(sf-snum)<1)
j=false;
chk[abs(sf-snum)]++;
sf=snum;
}
}
for(int i=0;i<num;i++)
    if(chk[i]>1)
    j=false;
if(j)
    cout<<"Jolly"<<endl;
else
    cout<<"Not jolly"<<endl;

}
return 0;
}
