#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<double> l(n), r(n);
    for(int i = 0; i < n; i++) {
        int t; cin >> t >> l[i] >> r[i];
        t--;
        if(t&1) r[i] -= 0.5; // tと1のビット単位のAND
        if(t&2) l[i] += 0.5; // tと2のビット単位のAND
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            ans += (max(l[i], l[j]) <= min(r[i], r[j]));
        }
    }
    cout << ans << endl;
}