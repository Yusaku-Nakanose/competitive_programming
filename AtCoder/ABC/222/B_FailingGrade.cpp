#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, p, cnt=0;
    cin >> n >> p;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] < p) cnt++;
    }
    cout << cnt << endl;
    return 0;
}