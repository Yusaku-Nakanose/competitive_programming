#include <iostream>
using namespace std;

long long llmax(long long x, long long y) {
    if(x <= y) return y;
    else return x;
}

int main() {
    long long a, b, c, d, sx, sy, tx, ty;
    cin >> a >> b >> c >> d;
    if(a <= c) {
        sx=a, sy=b, tx=c, ty=d; 
    }
    else {
        sx=c, sy=d, tx=a, ty=b;
    }

    int r, l;

    if(((sx+sy)%2)==0) r=sx+abs(ty-sy)+1;
    else r=sx+abs(ty-sy);

    if(((tx+ty)%2)==0) l=tx-1;
    else l=tx;

    if(r>=l) cout << abs(ty-sy) << endl;
    else cout << abs(ty-sy) + (r-l)/2+1 << endl;

    return 0;
}