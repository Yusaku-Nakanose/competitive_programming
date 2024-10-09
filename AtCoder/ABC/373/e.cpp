#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    long long k;
    cin >> n >> m >> k;
    vector<long long> a(n), b(n);
    for(int i=0; i<n; i++) cin >> a[i];
    long long rest = k;
    for(int i=0; i<n; i++) rest-=a[i];
    for(int i=0; i<n; i++) b[i] = a[i];
    sort(b.rbegin(), b.rend());
    long long top_sum = 0;
    for(int i=0; i<m+1; i++) top_sum += b[i];
    long long ans;
    for(int i=0; i<n; i++) {
        if(a[i] < b[m]) {
            ans = (top_sum-b[m] + rest - m*a[i] + m+1 -1) / (m+1);
            if(rest < ans) cout << -1 << " ";
            else cout << ans << " ";
        }
        else {
            ans = (top_sum - (m+1)*a[i] + rest + m+1 -1) / (m+1);
            cout << ans << " ";
        }
    }
    return 0;
}