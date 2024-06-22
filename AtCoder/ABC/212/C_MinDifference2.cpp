#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0;
    int ans = 1001001001; // 大きい数, 1は桁数可視化のため
    while(i < n && j < m) {
        ans = min(ans, (int)fabs(a[i] - b[j]));
        if(a[i] < b[j]) i++;
        else j++;
    }
    cout << ans << endl;
    return 0;
}