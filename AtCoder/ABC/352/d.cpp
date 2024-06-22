#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    int first=0, last=0, ans=n;
    for(int i=0; i<n; i++) cin >> p[i];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i<=p[j] && p[j]<=i+k-1) {
                first = j;
                break;
            }
        }
        for(int j=n-1; j>=0; j--) {
            if(i<=p[j] && p[j]<=i+k-1) { 
                last = j;
                break;
            }
        }
        ans = min(ans, last-first);
    }
    cout << ans << endl;
}