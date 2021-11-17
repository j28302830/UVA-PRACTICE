#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
int line,count=0,time;
cin>>line;
string word[line],trash,country[line],name;
while(line--){
cin>>word[count++];
getline(cin,trash);
}
sort(word,word+count);

for(int i=0;i<count;i++){

 name=word[i];
 time=0;
    if(word[i]!=word[i-1]){
    for(int j=0;j<count;j++)
    if(name==word[j])
        time++;
    cout<<word[i]<<" "<<time<<endl;
    }
}
return 0;
}
