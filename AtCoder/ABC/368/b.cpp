#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, cnt=0, num;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    while(num > 1) {
        sort(a.rbegin(), a.rend());
        a[0]--;
        a[1]--;
        num = 0;
        for(int i=0; i<n; i++) {
            if(a[i] > 0) num++;
        }
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}