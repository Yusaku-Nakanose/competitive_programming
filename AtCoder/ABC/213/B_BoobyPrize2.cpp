#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    for(int i = 0; i < n; i++) cin >> a[i].first;
    for(int i = 0; i < n; i++) a[i].second = i+1;
    sort(a.rbegin(), a.rend());
    cout << a[1].second << endl;
    return 0;
}