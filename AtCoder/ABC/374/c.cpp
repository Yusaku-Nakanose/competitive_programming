#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> k(n);
    long long total=0;
    for(int i=0; i<n; i++) {
        long long tmp;
        cin >> tmp;
        k[i] = tmp;
        total += tmp;
    }
    long long cnt, min=total;
    for(int bit=0; bit<(1<<n); bit++) {
        cnt=0;
        for(int i=0; i<n; i++) {
            if(bit & (1<<i)) {
                cnt+=k[i];
            }
        }
        long long diff = abs(2*cnt-total);
        if(diff < min) min=diff;
    }
    cout << (total+min)/2 << endl;
    return 0;
}