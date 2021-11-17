#include <bits/stdc++.h>
using namespace std;
#define r 6440.0
#define PI 3.14159265359
int main(){
double s,a,arc,chord;
string unit;
while (cin>>s>>a>>unit){
if(!unit.compare("min"))
a/=60.0;
if(a>180.0)
a=360.0-a;
arc=a*PI*(r+s)/180.0;
chord=2.0*(r+s)*sin(a/2.0/180.0*PI);
cout<<fixed<<setprecision(6)<<abs(arc)<<" "<<abs(chord)<<endl;
}    
return 0;
}