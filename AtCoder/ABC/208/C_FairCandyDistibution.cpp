#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++)  cin >> a[i];
    vector<long long> ans(n, k / n); // k / n で初期化
    k %= n;
    vector<pair<int, int>> p(n);
    for(int i = 0; i < n; i++)  p[i] = pair<int, int> (a[i], i);
    sort(p.begin(), p.end());
    for(int i = 0; i < k; i++)  ans[p[i].second]++;
    
    for(int i = 0; i < n; i++) cout << ans[i] << endl;
    return 0;
}