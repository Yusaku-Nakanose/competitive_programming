#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1),a(n+1);

    for(int i=1; i<=n; i++) {
        cin >> v[i];
        a[i] = i;
    }
    vector<int> b(a), c(v);
    int cnt=0;
    while(!(v.size() == a.size() && std::equal(v.cbegin(), v.cend(), a.cbegin()))) {
        for(int i=1; i<=n; i++) {
            if(v[i] != i) {
                // cout << i << " " << v[i] << endl;
                swap(v[i], v[v[i]]);
                cnt++;
            }
        }
    }
    cout << cnt << endl;

    while(!(c.size() == b.size() && std::equal(c.cbegin(), c.cend(), b.cbegin()))) {
        for(int i=1; i<=n; i++) {
            if(c[i] != i) {
                cout << i << " " << c[i] << endl;
                swap(c[i], c[c[i]]);
            }
        }
    }
    return 0;
}