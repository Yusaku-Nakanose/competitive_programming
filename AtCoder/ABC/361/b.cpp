#include<iostream>
using namespace std;

int main() {
    int a,b,c,d,e,f,g,h,i,j,k,l;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;
    int dx=abs((a+(d-a)/2)-(g+(j-g)/2)), dy=abs((b+(e-b)/2)-(h+(k-h)/2)), dz=abs((c+(f-c)/2)-(i+(l-i)/2));
    if((dx<((d-a)/2+(j-g)/2)) && (dy<((e-b)/2+(k-h)/2)) && (dz<((f-c)/2+(l-i)/2))) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}