#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    
    int ans = fabs(a[0]-b[0]);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            ans = min(ans, (int)fabs(a[i]-b[j]));
        }
    }
    cout << ans << endl;
    return 0;
}