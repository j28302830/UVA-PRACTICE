#include <bits/stdc++.h>
using namespace std;

int main(){
string temp, quotes{""};
bool f=false;    
while(getline(cin,temp))
quotes+=temp+'\n';
for(int i=0;i<quotes.size();i++)
if(quotes[i]=='\"'){
cout<<(f?"\'\'":"``");
f=f?false:true;
}
else
cout<<quotes[i];
return 0;
}