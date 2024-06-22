#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int x=a[0], y=a[0];
    long long s=0;
    for(int i = 0; i < n; i++) {
        x = min(x, a[i]);
        y = max(y, a[i]);
        s += a[i];
    }
    cout << x << " " << y << " " << s << endl;
    return 0;
}