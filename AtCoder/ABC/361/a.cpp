#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    a.insert(a.begin()+k, x);
    for(int i = 0; i <= n; i++) cout << a[i] << " ";
    return 0;
}