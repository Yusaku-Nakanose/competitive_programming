#include <iostream>
#include <vector>
using namespace std;

const int MaxA = 200;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> d(MaxA*2+1);
    for(int i = 0; i < n; i++) d[MaxA+a[i]]++;
    long long ans = 0;
    for(int ai = 0; ai < d.size(); ai++) {
        for(int aj = ai+1; aj < d.size(); aj++) {
            long long x = ai - aj;
            ans += x*x*d[ai]*d[aj];
        }
    }
    cout << ans << endl;
    return 0;
}