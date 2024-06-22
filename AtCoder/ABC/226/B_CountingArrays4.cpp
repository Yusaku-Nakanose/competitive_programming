#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    for(int i = 0; i < n; i++) {
        int l;
        cin >> l;
        a[i] = vector<int>(l);
        for(int j = 0; j < l; j++) cin >> a[i][j];
    }
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    cout << a.size() << endl;
    return 0;
}