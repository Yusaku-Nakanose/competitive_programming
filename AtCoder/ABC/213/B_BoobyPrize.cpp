#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<pair<int, int>> p(n);
    for(int i = 0; i < n; i++) p[i] = pair<int, int> (a[i], i+1);
    sort(p.begin(), p.end());
    cout << p[n-2].second << endl;
    return 0;
}