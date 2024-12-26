#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, r;
    cin >> n >> r;
    vector<int> d(n), a(n);
    for(int i=0; i<n; i++) cin >> d[i] >> a[i];
    for(int i=0; i<n; i++) {
        if(d[i]==1 && (1600<=r && r<2800)) r += a[i];
        else if(d[i]==2 && (1200<=r && r<2400)) r += a[i];
    }
    cout << r << endl;
    return 0;
}