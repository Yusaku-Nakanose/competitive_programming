#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long double> x(n+2), y(n+2);
    x[0] = (long double)0;
    y[0] = (long double)0;
    x[n+1] = (long double)0;
    y[n+1] = (long double)0;
    for(int i=1; i<=n; i++) {
        long long a, b;
        cin >> a >> b;
        x[i] = a * 1e8;
        y[i] = b * 1e8;
    }
    long double cnt=0;
    for(int i=0; i<=n; i++) {
        cnt += sqrt((x[i+1]-x[i])*(x[i+1]-x[i]) + ((y[i+1]-y[i]))*((y[i+1]-y[i])));
    }
    cout << fixed << setprecision(20);
    cout << cnt * 1e-8 << endl;
    return 0;
}