#include <bits/stdc++.h>
using namespace std;

int main(){
int block;
while(cin>>block){
int num[block],A,count=0,s,max,min;
for(int i=0;i<block;i++)
cin>>num[i];
sort(num,num+block);
if(block%2==0){
max=num[block/2];
min=num[(block/2)-1];
}
else{
max=num[block/2];
min=num[block/2];
}
for(int i=0;i<block;i++)
count+=max==num[i]||min==num[i]?1:0;
s=max-min+1;

cout<<min<<" "<<count<<" "<<s<<endl;
}
return 0;
}