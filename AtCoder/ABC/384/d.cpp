#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    long long s;
    cin >> n >> s;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    
    vector<int> b(2*n);
    for(int i=0; i<n; i++) b[i] = a[i];
    for(int i=n; i<2*n; i++) b[i] = a[i];
    
    vector<long long> t(2*n+1);
    t[0] = 0;
    for(int i=0; i<2*n; i++) t[i+1] = t[i] + b[i];
    s %= t[n];
    long long s2 =t[n]-s;

    long long cnt;
    int start=0, end=0;
    for(int i=0; i<4*n+2; i++) {
        cnt = t[end] - t[start];
        //cout << i << " " << cnt << endl;
        if(cnt==s || cnt==s2) {
            cout << "Yes" << endl;
            return 0;
        }
        else if(start==end || cnt<s) end++;
        else start++;
        if(end > 2*n) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}