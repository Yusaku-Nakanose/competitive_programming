#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if(1<n && (a[1]<b[0] || b[m-1]<a[n-2])) {
        cout << "Yes" << endl;
        return 0;
    }

    for(int i=0; i<n-1; i++) {
        for(int j=0; j<m-1; j++) {
            if(b[j]<a[i] && a[i+1]<b[j+1]) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}