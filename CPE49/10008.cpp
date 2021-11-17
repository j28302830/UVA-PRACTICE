#include <iostream>
#include <string>
using namespace std;
int fmax(int a,int b){
return a>b?a:b;
}
int main(){
int num,word[26]={0},Max;
cin>>num;
string line;
num++;
while(num--){
    Max=0;
getline(cin,line);
for(int j=0;j<line.length();j++){
    if(line[j]<='Z'&&line[j]>='A'){
    word[line[j]-'A']++;
    Max=fmax(Max,word[line[j]-'A']);
    }
    else if(line[j]<='z'&&line[j]>='a'){
    word[line[j]-'a']++;
    Max=fmax(Max,word[line[j]-'a']);
    }
}
}
do{
for(int i=0;i<26;i++){
if(word[i]==Max)
    cout<<(char)('A'+i)<<" "<<Max<<endl;
}
}while(Max--&&Max!=0);
return 0;
}
