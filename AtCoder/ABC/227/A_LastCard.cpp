#include <iostream>
using namespace std;

int main() {
    int n, k, a;
    cin >> n >> k >> a;
    if(a == 1) a = n+1;
    int ans = k%n + a-1;
    if(ans > n && ans%n != 0) cout << ans%n << endl;
    else if(ans%n == 0) cout << n << endl;
    else cout << ans << endl;
    return 0;
}