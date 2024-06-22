#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for(int i=0; i<n; i++) cin >> a[i] >> b[i];
    int M=0, j;
    for(int i=0; i<n; i++) {
        if(b[i]-a[i]>M) {
            M=b[i]-a[i];
            j = i;
        }
    }
    long long ans = 0;
    for(int i=0; i<n; i++) {
        if(i!=j) ans+=a[i];
        else ans+=b[i];
    }
    cout << ans << endl;
}