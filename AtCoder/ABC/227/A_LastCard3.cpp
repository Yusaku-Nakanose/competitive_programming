#include <iostream>
using namespace std;

int main() {
    int n, k, a;
    cin >> n >> k >> a;
    int ans = (a + k - 1 - 1) % n + 1; // -1して余りを求めて+1することで調整
    cout << ans << endl;
    return 0;
}