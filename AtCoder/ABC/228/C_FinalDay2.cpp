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
    // (a[k]より小さい値(順番は適当)),a[k],(a[k]より大きい値(順番は適当))となる
    nth_element(q.begin(), q.begin()+n-k, q.end()); // 降順でq.begin+k-1でq[k-1]で判定でも可
    for(int x : p) {
        cout << (x + 300 >= q[n-k] ? "Yes" : "No") << endl;
    }
    return 0;
}