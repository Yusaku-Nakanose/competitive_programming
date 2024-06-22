#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    long long n; cin >> n;
    string ans;
    while(n > 0) {
        if(n % 2) { // nが奇数の場合
            ans += 'A'; n--;
        }
        else { // nが偶数の場合
            ans += 'B'; n /= 2;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}