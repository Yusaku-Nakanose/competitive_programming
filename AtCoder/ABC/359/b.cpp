#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    vector<int> a(2*n);
    for(int i=0; i<2*n; i++) cin >> a[i];
    for(int i=0; i<2*n-2; i++) {
        if(a[i] == a[i+2]) cnt++;
    }
    cout << cnt << endl;
    return 0;
}