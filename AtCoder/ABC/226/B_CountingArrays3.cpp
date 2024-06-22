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
    int ans = 1; // 最初の1つで確実に1つはある
    for(int i = 0; i < n-1; i++) if(a[i] != a[i+1]) ans++;
    cout << ans << endl;
    return 0;
}