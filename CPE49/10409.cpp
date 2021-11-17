#include <bits/stdc++.h>
using namespace std;

int main(){
int cases;
string way;

while(cin>>cases&&cases!=0){
int die[6]{1,2,3,4,5,6},t;
while(cases--){
cin >> way; 
if(way=="north"){
t=die[0];
die[0]=die[4];
die[4]=die[5];
die[5]=die[1];
die[1]=t;
}
else if(way=="south"){
t=die[0];
die[0]=die[1];
die[1]=die[5];
die[5]=die[4];
die[4]=t;
}
else if(way=="west"){
t=die[0];
die[0]=die[3];
die[3]=die[5];
die[5]=die[2];
die[2]=t;
}
else if(way=="east"){
t=die[0];
die[0]=die[2];
die[2]=die[5];
die[5]=die[3];
die[3]=t;
}
}
cout<<die[0]<<endl;
}
return 0;
}