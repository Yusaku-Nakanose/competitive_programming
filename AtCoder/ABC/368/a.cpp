#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(2*n);
    for(int i=0; i<n; i++) {
        int tmp;
        cin >> tmp;
        a[i] = tmp;
        a[i+n] = tmp;
    }
    for(int i=n-1-(k-1); i<2*n-1-(k-1); i++) cout << a[i] << " ";
    return 0;
}