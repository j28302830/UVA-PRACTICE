#include <iostream>
#include <string>
using namespace std;

int main(){
string word,keyboard="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
while(getline(cin,word)){

for(int i=0;i<word.length();i++)
if(word[i]!=' '){

    word[i]=keyboard[keyboard.find(tolower(word[i]))-2];
}
cout<<word<<endl;
}

return 0;
}
