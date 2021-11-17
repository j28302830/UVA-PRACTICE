#include <bits/stdc++.h>
using namespace std;

int main(){
int Case,M,N,Q,r,c;
cin>>Case;
while(Case--){

cin>>M>>N>>Q;
string square[M],s;
cout<<M<<" "<<N<<" "<<Q<<endl;
getline(cin,s);
for(int i=0;i<M;i++)
getline(cin,square[i]);
while(Q--){
int count=1;
bool t=true;
cin>>r>>c;
for(int i=1;;i++){
for(int j=0;j<(2*i+1);j++){
if((r-i)<0||(c-i)<0||(c-i+j)>=N||(r-i+j)>=M||(c+i)>=N||(r+i)>=M){
t=false;
break;
}
if(square[r][c]!=square[r-i][c-i+j]){
t=false;
break;
}
if(square[r][c]!=square[r+i][c-i+j]){
t=false;
break;
}
if(square[r][c]!=square[r-i+j][c-i]){
t=false;
break;
}
if(square[r][c]!=square[r-i+j][c+i]){
t=false;
break;
}
}
if(!t)
break;
count++;
}
cout<<2*count-1<<endl;
}
}

return 0;
}