#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> h(n+1);
    for(int i=1; i<=n; i++) cin >> h[i];

    int ans=1;
    for(int interval=1; interval<n; interval++) {
        for(int start=1; start<=interval; start++){
            int cnt = 1;
            for(int x=start; x+interval<=n; x+=interval) {
                if(h[x]==h[x+interval]) {
                    cnt++;
                    if(ans < cnt) ans = cnt;
                }
                else cnt=1;
           }
        }
    }
    cout << ans << endl;
    return 0;
}