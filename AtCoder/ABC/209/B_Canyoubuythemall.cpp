#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    long long x;
    cin >> n >> x;
    for(int i = 0; i < n; i++)  cin >> a[i];
    for(int i = 1; i < n; i += 2)   a[i] -= 1;
    int cnt = 0;
    for(int i = 0; i < n; i++)  cnt += a[i];
    if(cnt <= x)    cout << "Yes" << endl;
    else            cout << "No" << endl;
    return 0;
}