#include <bits/stdc++.h>
using namespace std;

int main(){
    double fx,fy,x[4],y[4];
    while(cin>>x[0]>>y[0]){
        fx=x[0];
        fy=y[0];
        for(int i=1;i<4;i++){
            cin>>x[i]>>y[i];
            fx+=x[i];
            fy+=y[i];
        }
        for(int i=0;i<3;i++)
            for(int j=i+1;j<4;j++)
                if(x[i]==x[j]&&y[i]==y[j]){ //(x1,y1) will be repeat
                    fx-=3*x[i]; //fx=x2+x3+2*x1-3*x1
                    fy-=3*y[i]; //fy as above
                }
        printf("%.3f %.3f\n",fx,fy);
    }
    return 0;
}

// (x2,y2)<-(x1,y1)->(x3,y3) => find the coordinate of (x4,y4)
// (x3+x2)/2=(x1+x4)/2, (y3+y2)/2=(y1+y4)/2
// x4=x3+x2-x1, y4=y3+y2-y1