#include <iostream>
using namespace std;

int main(){
string line;
bool first=true;
while(getline(cin,line)){
int num[95]{0},small=1001,sindex=-1,count=0;
for(int i=0;i<line.length();i++)
num[line[i]-32]++;
if(!first)
cout<<endl;
first=false;
while(1){
for(int i=0;i<95;i++){
if(num[i]==0)count++;
if(small>num[i]&&num[i]!=0){
small=num[i];
sindex=i;
}
else if(small==num[i]&&sindex<i)
sindex=i;
}
if(count==95)break;
else count=0;
cout<<sindex+32<<" "<<num[sindex]<<endl;
num[sindex]=0;
small=1001;
}
}
return 0;
}
