#include <bits/stdc++.h>
using namespace std;

int main(){
int bx,by,x,y,pos,lx[50]{-1},ly[50]{-1},k=0;
char w;
string a,p{"WNES"};
cin>>bx>>by;
while(scanf("%d %d %c",&x,&y,&w)!=EOF){
int i,tx,ty;
bool jud=true;
pos=p.find(w);
cin>>a;
for(i=0;i<a.size();i++){
tx=x;
ty=y;
switch(a[i]){
    case 'R':pos++;pos%=4;break;
    case 'L':pos--;pos+=pos<0?4:0;break;
    case 'F':
    switch(p[pos]){
        case 'W':x--;break;
        case 'N':y++;break;
        case 'E':x++;break;
        case 'S':y--;break;
    }
    break;
}
if(x>bx||y>by||x<0||y<0){
bool c=true;
for(int j=0;j<50;j++)
if(lx[j]==tx&&ly[j]==ty){
x=tx;
y=ty;
c=false;
break;
}
if(c){
lx[k]=tx;
ly[k++]=ty;
cout<<tx<<" "<<ty<<" "<<p[pos]<<" LOST\n";
jud=false;
break;
}
}
}
if(jud)
cout<<x<<" "<<y<<" "<<p[pos]<<endl;
}
return 0;    
}