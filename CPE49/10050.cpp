#include <bits/stdc++.h>
using namespace std;

int main(){
int cases, day, num;;
cin>>cases;
while(cases--){
cin>>day>>num;
int party[num], count{0};
bool commit[day]{false};
for(int i=0;i<num;i++){
cin>>party[i];
}
for(int i=0;i<day;i++)
for(int j=0;j<num;j++)
if((i+1)%party[j]==0&&(i+1)%7!=6&&(i+1)%7!=0){
commit[i]=true;
}
for(int i=0;i<day;i++)
if(commit[i])count++;

cout<<count<<endl;
}

return 0;
}