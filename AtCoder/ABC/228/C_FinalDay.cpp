#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    for(int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        p[i] = a + b + c;
    }
    vector<int> q = p;
    sort(q.begin(), q.end());
    for(int x : p) {
        cout << (x + 300 >= q[n-k] ? "Yes" : "No") << endl; // 降順ならq[k]で判定
    }
    return 0;
}