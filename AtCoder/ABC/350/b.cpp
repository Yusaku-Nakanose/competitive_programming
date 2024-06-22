#include <iostream>
#include <map>
using namespace std;

int main() {
    int n,q;
    cin >> n >> q;
    map<int,int> mp;
    for(int i=0; i<q; i++) {
        int t;
        cin >> t;
        mp[t]++;
    }
    int cnt=0;
    for(int i=1; i<=n; i++) {
        if(mp[i]%2 == 0) cnt++;
    }
    cout << cnt << endl;
    return 0;
}