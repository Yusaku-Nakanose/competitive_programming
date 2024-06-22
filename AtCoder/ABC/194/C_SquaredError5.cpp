#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    long long sum = 0;
    long long sqrd = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
        sqrd += a[i]*a[i]; 
    }
    long long ans = n*sqrd - sum*sum;
    cout << ans << endl;
    return 0;
}