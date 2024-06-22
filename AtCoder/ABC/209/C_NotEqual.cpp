#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> c(n);
    for(int i = 0; i < n; i++)  cin >> c[i];
    sort(c.begin(), c.end());
    long long ans = 1;
    for(int i = 0; i < n; i++)  ans = ans * (c[i] - i) % (1000000007); // *= を使うとなぜか答えが変わる
    cout << ans << endl;
    return 0;
}