#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> s(n), t(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    for(int i = 0; i < n; i++) cin >> t[i];
    for(int i = 0; i < 2*n; i++) {
        t[(i+1)%n] = min(t[i%n]+s[i%n], t[(i+1)%n]);
    }
    for(int i = 0; i < n; i++) cout << t[i] << endl;
    return 0;
}