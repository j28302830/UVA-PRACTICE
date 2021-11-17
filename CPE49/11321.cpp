#include "bits/stdc++.h"
using namespace std;
int N, M;
bool cmp(int i, int j) {
    if (i % M != j % M) // i&1 能夠判斷 i 是否為奇數, i的二位元要產生奇數一定要是(???1)的模式
        return i % M < j % M;
    if ((i & 1) && (j & 1))
        return i > j;
    else if (!(i & 1) && !(j & 1))
        return i < j;
    else
        return i & 1;
}
int main() {
    while (cin >> N >> M, N) {
        cout << N << " " << M << endl;
        int box[N];
        for(int i=0;i<N;i++)
        cin>>box[i];
        sort(box, box+N, cmp);
        for(int i=0;i<N;i++)
            cout<<box[i]<<endl;
    }
    cout << 0 << " " << 0 << endl;
}