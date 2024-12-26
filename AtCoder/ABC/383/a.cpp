#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> t(n), v(n);
    for(int i=0; i<n; i++) cin >> t[i] >> v[i];
    int cnt=v[0];
    for(int i=1; i<n; i++) {
        cnt = max(cnt-(t[i]-t[i-1]), 0) + v[i];
    }
    cout << cnt << endl;
    return 0;
}