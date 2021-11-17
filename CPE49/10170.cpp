#include <iostream>
using namespace std;
#define ll long long  
int main(){
ll S,D,A;
while(cin>>S>>D){
A=S;
while(A<D){
S++;
A+=S;    
}
cout<<S<<endl;
}
return 0;
}