#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) {cin >> a[i]; a[i]--;} // cin>>a[i],a[i]-- でも同様(カンマは前の式と後ろの式を順番に実行する演算子)
    int i = x-1;
    do{ // 最低でもx二より知る人がいる→do while
        b[i] = true;
        i = a[i];
    } while(!b[i]);

    int ans = 0;
    for(int i = 0; i < n; i++) if(b[i]) ans++;
    cout << ans << endl;
    return 0;
}