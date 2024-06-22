#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    long long x;
    cin >> x;

    long long sum = 0;
    for(int val:a) sum += val; // for(int i = 0; i < n; i++) sum += a[i]
    long long p = x / sum;
    long long sump = p * sum;
    long long ans = p * n;
    
    for(int val:a) {
        sump += val; // 順に動く
        ans++;
        if(sump > x) {
            cout << ans << endl;
            return 0;
        }
    }
    return 0;
}