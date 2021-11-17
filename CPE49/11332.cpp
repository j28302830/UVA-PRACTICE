#include <iostream>
using namespace std;
int formula(int i){

if(i<10)
return i;
int sum=0;
while(i>0){
sum+=i%10;
i/=10;
}
return formula(sum);

}
int main(){
int in;
while(cin>>in&&in!=0)
    cout<<formula(in)<<endl;
return 0;
}
