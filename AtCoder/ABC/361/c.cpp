#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int min = INT_MAX;
    for(int i = 0; i < k+1; i++) {
        int diff = a[i+n-k-1] - a[i];
        if(diff < min) min = diff; 
    }
    cout << min << endl;
    return 0;
}