#include <iostream>
#include <vector>
using namespace std;

int main() { // 重い
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            int x = a[i]-a[j];
            ans += x*x;
        }
    }
    cout << ans << endl;
    return 0;
}