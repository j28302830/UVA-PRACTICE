#include <bits/stdc++.h>
using namespace std;

int main(){
int Case,train;
cin>>Case;
while(Case--){
cin>>train;
int number[train],count=0,temp;
for(int i=0;i<train;i++)
cin>>number[i];
while(train!=0){
for(int i=0;i<(train-1);i++)
if(number[i]>number[i+1]){
temp=number[i];
number[i]=number[i+1];
number[i+1]=temp;
count++;
}
train--;
}
cout<<"Optimal train swapping takes "<<count<<" swaps.\n";
}

return 0;
} 