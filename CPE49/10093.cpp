#include <iostream>
using namespace std;
 
int main() {
int sum, big_base, temp;
string num;
while (getline(cin, num)){
sum = 0;
big_base = 1;
int i;
for (i=0;i<num.size();i++) {
if (num[i]>='0'&&num[i]<='9') 
temp=num[i]-'0';
else if (num[i]>='A'&&num[i]<='Z') 
temp=num[i] - 'A' + 10;
else if (num[i]>='a'&&num[i]<='z') 
temp=num[i]-'a'+36;
else continue;
if (big_base<temp)
big_base=temp;
sum+=temp;
}
for (i=big_base;i<62;i++)
if (!(sum%i)) {
cout<<i+1<<"\n";
break;
}
if (i==62)
cout << "such number is impossible!\n";
}
return 0;
}