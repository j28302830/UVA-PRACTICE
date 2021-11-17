#include <iostream>
#include <string>
using namespace std;
int Min(int a,int b){
    return a<b?a:b;
}
int main(){
string line1,line2;
int mi;
while(getline(cin,line1)){
        getline(cin,line2);
int first[26]{0},second[26]{0};

for(int i=0;i<line1.length();i++)
first[line1[i]-97]++;
for(int i=0;i<line2.length();i++)
second[line2[i]-97]++;
for(int i=0;i<26;i++)
if(first[i]!=0&&second[i]!=0){
    mi=Min(first[i],second[i]);
    while(mi--)
    cout<<(char)('a'+i);
}
cout<<endl;
}
return 0;
}
