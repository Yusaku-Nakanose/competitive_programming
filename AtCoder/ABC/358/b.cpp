#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    vector<long long> t(n), ans(n);
    for(int i = 0; i < n; i++) cin >> t[i];
    ans[0] = t[0] + a;
    for(int i = 0; i < n-1; i++) {
        if(t[i+1] < ans[i]) ans[i+1] = ans[i] + a;
        else ans[i+1] = t[i+1] + a;  
    }
    for(int i = 0; i < n; i++) cout << ans[i]<< endl;
    return 0;
}