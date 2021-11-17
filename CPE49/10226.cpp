#include <bits/stdc++.h>
using namespace std;
int main(){
int cases, time;
cin>>cases;
cin.ignore();
time=cases;
while(cases>-1){
int i=0,count[10000]{0},num{0};
string t,species[10000],temp[10000];
while(getline(cin,t)&&t!=""){
num++;
if(i==0){
species[i]=t;
temp[i]=t;
count[i++]++;
continue;
}

for(int k=0;k<i;k++)
if(t==species[k]){
count[k]++;
break;
}
else if(k==i-1){
species[i]=t;
temp[i]=t;
count[i++]++;
break;
}
}
if(cases<time-1)
cout<<endl;
cases--;
sort(temp,temp+i);
for(int j=0;j<i;j++)
for(int k=0;k<i;k++)
if(temp[j]==species[k]){
cout<<species[k]<<" "<<fixed<<setprecision(4)<<(double)count[k]*100/num<<endl;
break;
}

}
return 0;
}