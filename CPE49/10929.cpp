#include <iostream>
using namespace std;

int main(){
string num;
int even,odd;
while(cin>>num&&num!="0"){
even=0,odd=0;
for(int i=0;i<num.length();i++)
if(i%2==0)
odd+=num[i]-'0';
else
even+=num[i]-'0';

if(abs(even-odd)%11==0)
cout<<num<<" is a multiple of 11."<<endl;
else
cout<<num<<" is not a multiple of 11."<<endl;

}

return 0;
}
