#include <iostream>
using namespace std;

int main() {
    string x;
    int a, ans = 0;
    cin >> x;
    int n = x.size();
    for(int i = 0; i < n-4; i++) { // 整数部分だけ
        a = (int)(x[i] - '0');
        ans = 10 * ans + a;
    }
    // 小数第3位まで入力される→x[n-1]が小数第3位→x[n-3]が小数第1位
    if(x[n-3] >= '5') ans++; // 文字同士で判断
    cout << ans << endl;
    return 0;
}