#include <iostream>
#include <cstdio>
using namespace std;

int main(){
int Case,first,ends,sum;
cin>>Case;
for(int i=1;i<=Case;i++){
        sum=0;
cin>>first>>ends;
for(int j=first;j<=ends;j++)
    if(j%2!=0)
    sum+=j;

printf("Case %d: %d\n", i,sum);
}

return 0;
}
