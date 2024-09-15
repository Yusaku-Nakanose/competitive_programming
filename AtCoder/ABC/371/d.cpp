#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n, q;
    cin >> n;
    vector<long long> x(n), p(n);
    for(long long i=0; i<n; i++) cin >> x[i];
    for(long long i=0; i<n; i++) cin >> p[i];
    cin >> q;
    vector<long long> l(q), r(q);
    for(long long i=0; i<q; i++) cin >> l[i] >> r[i];

    vector<long long> s(n+1, 0);
    for(int i=0; i<n; i++) s[i+1] = s[i]+p[i];

    for(long long i=0; i<q; i++) {
        if(x[n-1]<l[i] ||r[i]<x[0]) {
            cout << 0 << endl;
            continue;
        }
        long long lng=-1, lok=n-1;
        while(lok-lng > 1) {
            long long lmid = (lng + lok) / 2;
            if(x[lmid] < l[i]) lng = lmid; //入ってないからng
            else lok = lmid; // >=で入っているからok
        }

        long long rng=n, rok=0;
        while(abs(rok-rng) > 1) {
            long long rmid = (rng + rok) / 2;
            if(x[rmid] <= r[i]) rok = rmid; //入ってるからok
            else rng = rmid; // 入ってないからng
        }
        cout << s[rng]-s[lok] << endl;;
    }
    return 0;
}