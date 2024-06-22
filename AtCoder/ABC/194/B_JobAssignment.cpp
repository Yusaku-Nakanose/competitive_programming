#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
    vector<int> p;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j) p.push_back(max(a[i], b[j]));
            else p.push_back(a[i] + b[j]);
        }
    }
    sort(p.begin(), p.end());
    cout << p[0] << endl;
    return 0;
}