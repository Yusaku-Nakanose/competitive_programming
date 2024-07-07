#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    vector<int> a(n), w(n);
    for(int i = 0; i <= n; i++) w[i] = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i <= n; i++) {
        if(w[a[i]] == 0) cin >> w[a[i]];
        else {
            int tmp;
            cin >> tmp;
            if(tmp < w[a[i]]) cnt += tmp;
            else {
                cnt += w[a[i]];
                w[a[i]] = tmp;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}