#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    vector<long long> a(n);
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    
    if(sum <= m) {
        cout << "infinite" << endl;
        return 0;
    }
    
    sort(a.begin(), a.end());
    
    long long left = 0, right = 1e9 + 1, ans = 0;
    while(left <= right) {
        long long mid = (left + right) / 2;
        long long total = 0;
        for(int i = 0; i < n; i++) {
            total += min(a[i], mid);
        }
        if(total <= m) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    cout << ans << endl;
    return 0;
}