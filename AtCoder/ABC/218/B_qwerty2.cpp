#include <iostream>
using namespace std;

int main() {
    string ans;
    for(int i = 0; i < 26; i++) {
        // ex)p=1のときaを足したい→下の返還を見ると1減らす必要があることがわかる
        int p; cin >> p; p--;
        ans += (char)('a'+p); // 1桁の整数値から1文字の数字に変換
    }
    cout << ans << endl;
    return 0;
}