#include <iostream>
#include<algorithm>
using namespace std;

int main(){
int i,hnum,si[1000],d,mid;
cin>>i;
while(i--){
  cin>>hnum;
    d=0;
  for(int l=0;l<hnum;l++)
  cin>>si[l];

  sort(si,si+hnum);
  mid=hnum/2;
  while(hnum--)
    d+=abs(si[mid]-si[hnum]);

    cout<<d<<endl;
}

return 0;
}
