#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> compress(vector<int> a) {
    vector<int> vals = a;
    sort(vals.begin(), vals.end());
    vals.erase(unique(vals.begin(), vals.end()), vals.end());
    for(auto &v : a) {
        v = lower_bound(vals.begin(), vals.end(), v) - vals.begin();
    }
    return a;
}

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
    a = compress(a);
    b = compress(b);
    for(int i = 0; i < n; i++) printf("%d %d\n", a[i]+1, b[i]+1);
    return 0;
}