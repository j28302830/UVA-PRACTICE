#include <iostream>
#include <iostream>
using namespace std;

int main(){
string words[101];
int i=0,Max=0;
while(getline(cin,words[i])){
 if(Max<words[i].length())
    Max=words[i].length();
    i++;
}
for(int j=0;j<Max;j++){
    for(int k=i-1;k>=0;k--)
        if(words[k].length()>j)
        cout<<words[k][j];
        else
        cout<<" ";
    cout<<endl;
}
return 0;
}
