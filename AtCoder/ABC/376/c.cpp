#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n),b(n-1);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n-1; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> c(n-1);
    for(int i=0; i<n-1; i++) c[i] = a[i+1]-b[i];

    int ans=a[0];

    for(int i=n-1; i>0; i--) {
        if(a[i] > b[i-1]) {
            ans = a[i];
            b.insert(b.begin()+i, a[i]);
            break;
        }
    }

    if(b.size() == n-1) b.insert(b.begin(), a[0]);
    cout << b.size() << endl;

    for(int i=0; i<n; i++) {
        if(a[i] > b[i]) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << ans << endl;
    return 0;
}