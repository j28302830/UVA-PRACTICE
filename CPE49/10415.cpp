#include <iostream>
using namespace std;

int main(){
  int cases;
    string box,
    finger[14]{
"1110000000",
"1100000000",
"0010000000",
"1111001110",
"1111001100",
"1111001000",
"1111000000",
"0110000000",
"0100000000",
"0111001111",
"0111001110",
"0111001100",
"0111001000",
"0111000000",
};
    cin>>cases;
    cin.get();
    while(cases--){
        int count[10]{0},temp;
        bool note[10]{false};
        getline(cin,box);
        for(int i=0;i<box.length();i++){
            if(box[i]=='\n')cout<<"enter"<<i<<endl;
            else if(box[i]>=65&&box[i]<=90)
            temp=box[i]-65;
            else
            temp=box[i]-97+7;
        
            for(int j=0;j<10;j++){
            if(finger[temp][j]=='1'&&note[j]==false)
            count[j]++;

            if(finger[temp][j]=='0')
            note[j]=false;
            else
            note[j]=true;  
            }
        }
        for(int i=0;i<10;i++){
        if(i)cout<<" ";
        cout<<count[i];
        }
        cout<<endl;
    }
    return 0;
}