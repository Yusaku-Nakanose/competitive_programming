#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n-1), b(n-1), num(n+1);
    for(int i = 0; i < n-1; i++) {
        cin >> a[i] >> b[i];
        num[a[i]]++, num[b[i]]++;
    }
    for(int i = 0; i <= n; i++) {
        if(num[i] == n-1) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}