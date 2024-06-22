#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
    double t = 0, ans = 0;
    for(int i = 0; i < n; i++) t += a[i]/b[i];
    t /= 2; // 2つの火がぶつかる時間
    for(int i = 0; i < n; i++) {
        ans += min(a[i], t*b[i]); // 最後以外左採用
        t -= min(a[i]/b[i], t); // 最後以外左採用
    }
    cout << fixed << setprecision(15);
    cout << ans << endl;
    return 0;
}