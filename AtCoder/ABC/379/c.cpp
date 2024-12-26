#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    vector<long long> x(m), a(m);
    for(long long i=0; i<m; i++) cin >> x[i];
    for(long long i=0; i<m; i++) cin >> a[i];
    vector<long long> s(m+1);
    s[0] = 0;
    for(long long i=0; i<m; i++) s[i+1] = s[i] + a[m-1-i];

    if(x[0]!=1) {
        cout << -1 << endl;
        return 0;
    }

    for(long long i=0; i<m; i++) {
        if((n+1-x[m-1-i]) < s[i+1]) {
            cout << -1 << endl;
            return 0;
        }
    }

    long long total=0;
    for(long long i=0; i<m-1; i++) {
        long long diff = a[i+1]-a[i];
        total += (diff-1)*diff/2;
    }
    total += (n-a[m-1]-1)*(n-a[m-1])/2;

    cout << total << endl;
    return 0;
}