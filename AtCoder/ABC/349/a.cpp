#include <iostream>
using namespace std;

int main() {
    int a, n, ans=0;
    cin >> n;
    for (int i = 0; i < n-1; i++) {
        cin >> a;
        ans -= a;
    }
    cout << ans << endl;
    return 0;
}