#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> x(n), y(n);
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];
    int  ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            for(int k = 0; k < j; k++) { // i→jベクトルとi→kベクトル
                long long xa = x[j]-x[i];
                long long ya = y[j]-y[i];
                long long xb = x[k]-x[i];
                long long yb = y[k]-y[i];
                if(xa*yb != xb*ya) ++ans;
            }
        }
    }
    cout << ans << endl;
    return 0;
}