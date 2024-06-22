#include <iostream>
#include <vector>
using namespace std;

const int MaxA = 200;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> d(MaxA*2+1); // -200~200の401個
    long long ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = -MaxA; j <= MaxA; j++) {
            int c = d[MaxA+j]; // 0スタート, 0<=MaxA+a[i]<=400
            int x = a[i]-j;
            ans += (long long)x*x*c;
        }
        d[MaxA+a[i]]++; // 0<=MaxA+a[i]<=400
    }
    cout << ans << endl;
    return 0;
}