#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main(){
    int cases,dim,k;
    string str1,str2;
    cin>>cases;
    for(int i=0;i<cases;i++){
        cin>>str1>>str2>>dim;
        ll matrix[dim*dim];
        int center=(int)ceil((float)dim*dim/2);
        for(int j=0;j<dim*dim;j++)cin>>matrix[j];
        for(k=0;k<center;k++)
        if(matrix[k]!=matrix[dim*dim-1-k]||matrix[k]<0)
        break;
        if(k==center)
        cout<<"Test #"<<i+1<<": Symmetric.\n";
        else
        cout<<"Test #"<<i+1<<": Non-symmetric.\n"; 
    }
    return 0;
}