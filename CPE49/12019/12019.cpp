#include <iostream>
#include <string>
using namespace std;

int main()
{
  int cases,month,date,doomsday[]{10,21,7,4,9,6,11,8,5,10,7,12};
  string name[]{"Mon","Tues","Wednes","Thurs","Fri","Satur","Sun"}; 
  cin>>cases;
  while(cases--){
    cin>>month>>date;
    if(date>=doomsday[month-1]||(doomsday[month-1]-date)%7==0)
    cout<<(name[(date-doomsday[month-1])%7]);
    else
    cout<<(name[7-(doomsday[month-1]-date)%7]);
    cout<<"day\n";
    }
    return 0;
}
