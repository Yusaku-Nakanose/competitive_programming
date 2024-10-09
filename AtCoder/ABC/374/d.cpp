#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n, t, s;
    cin >> n >> t >> s;
    vector<long double> a(n), b(n), c(n), d(n);
    for(int i=0; i<n; i++) {
        long double tmp1, tmp2, tmp3, tmp4;
        cin >> tmp1 >> tmp2 >> tmp3 >> tmp4;
        a[i]=tmp1*1e6, b[i]=tmp2*1e6, c[i]=tmp3*1e6, d[i]=tmp4*1e6;
    }
    long double x, y, diff1=0, diff2=0;
    for(int i=0; i<n; i++) {
        x=powl((c[i]-a[i]),2), y=powl((d[i]-b[i]), 2);
        diff1 += sqrt(x+y);
    }
    cout << endl;
    for(int i=0; i<n-1; i++) {
        x=powl((c[i]-a[i+1]),2), y=powl((d[i]-b[i+1]),2);
        diff2 += sqrt(x+y);
        cout << diff2 << endl;
    }
    cout << diff1 << ' ' << diff2 << endl;
    //for(int i=0; i<n; i++) cout << a[i] << ' ' << b[i] << ' ' << c[i] << ' ' << d[i] << endl;
    cout << (long double) (diff1/t+diff2/s)/1e6 << endl;
    return 0;
}