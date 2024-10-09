#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n),b(n);
    long long a_max=-10e9-1, b_max=-10e9-1;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(a_max < a[i]) a_max=a[i];
    }
    cout << a_max << endl;
    for(int i=0; i<n; i++) {
        cin >> b[i];
        if(b_max < b[i]) b_max=b[i];
    }
    cout << a_max+b_max << endl;
    return 0;
}